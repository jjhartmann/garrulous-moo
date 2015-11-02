// Audio class for tutorial
#if !defined(STAGE_Audio_H)
#define STAGE_Audio_H

#include "IwSound.h"
#include <list>

class AudioSound
{
public:
    AudioSound() :
        m_SoundData(0),
        m_SoundSpec(0)
    {};

    ~AudioSound();

    bool Load(const char* file);


    //Variables
    unsigned int m_NameHash;
    CIwSoundData *m_SoundData;
    CIwSoundSpec *m_SoundSpec;



};


class Audio
{
public:
    Audio();
    ~Audio();

    // STATIC.................................
    // Play back the sound/audio
    static void PlayMusic(const char *filename, bool repeat = true);

    // Stop playback
    static void StopMusic();

    // Public..................................
    // FindSounds: Search for named sound effect
    AudioSound* FindSound(unsigned int name_hash);

    // Updates the audio system
    void Update();

    // Preload a sound effect
    AudioSound* PreloadSound(const char *filename);

    // Play a sound effect
    void PlaySound(const char* filename);

    // VARS..................................
    std::list<AudioSound*> m_Sounds;
};

#endif