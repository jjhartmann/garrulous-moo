

#include "audio.h"
#include "s3e.h"
#include "IwHashString.h"

using namespace std;

Audio *g_pAudio;

AudioSound::~AudioSound()
{
    if (m_SoundSpec != 0)
        delete m_SoundSpec;
    if (m_SoundData != 0)
        delete m_SoundData;
}

// AudioSound Class ..............................................
bool AudioSound::Load(const char *file)
{
    m_NameHash = IwHashString(file);
    m_SoundData = CIwSoundWAV::Create(file, NULL, NULL);

    if (m_SoundData == 0)
    {
        return false;
    }

    m_SoundSpec = new CIwSoundSpec();
    m_SoundSpec->SetData(m_SoundData);

    return true;
}


// Audio Class ..................................................
Audio::Audio()
{
    // Init IwSound
    IwSoundInit();
}

Audio::~Audio()
{
    for (map<int, AudioSound*>::iterator it = m_Sounds.begin(); it != m_Sounds.end(); ++it)
    {
        delete it->second;
    }

    IwSoundTerminate();
}

AudioSound* Audio::FindSound(unsigned int name_hash)
{
    map<int, AudioSound*>::iterator it = m_Sounds.find(name_hash);
    if (it != m_Sounds.end())
    {
        return it->second;
    }

    return 0;
}

void Audio::Update()
{
    IwGetSoundManager()->Update();
}

void Audio::PlayMusic(const char *filename, bool repeat /* = true */)
{
    // only mp3 files. 
    if (s3eAudioIsCodecSupported(S3E_AUDIO_CODEC_MP3))
    {
        s3eAudioPlay(filename, repeat ? 0 : 1);
    }
}

void Audio::StopMusic()
{
    s3eAudioStop();
}

AudioSound* Audio::PreloadSound(const char *filename)
{
    unsigned int fileHash = IwHashString(filename);
    AudioSound *sound = FindSound(fileHash);
    if (sound == NULL)
    {
        sound = new AudioSound();
        if (!sound->Load(filename))
        {
            delete sound;
            return 0;
        }

        m_Sounds.insert(pair<int, AudioSound*>(fileHash, sound));
    }

    return sound;
}

void Audio::PlaySound(const char* filename)
{
    AudioSound *sound = PreloadSound(filename);
    if (sound != NULL)
    {
        sound->m_SoundSpec->Play();
    }
}



