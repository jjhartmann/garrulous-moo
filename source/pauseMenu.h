//////////////////////////////////////////////////////////////////////////
// PauseMenu


#if !defined(STAGE_Audio_H)
#define STAGE_Audio_H

#include "scene.h"


class PauseMenu : public Scene
{
public:
    PauseMenu();
    ~PauseMenu();




protected:
    CSprite *continueGameButton;
    CSprite *newGameButton;

private:
};






#endif

