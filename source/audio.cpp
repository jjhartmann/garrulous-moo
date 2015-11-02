// AudioSound Class

#include "audio.h"



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