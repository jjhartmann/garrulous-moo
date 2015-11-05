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


    //GET SET
    CSprite* GetNewGameButton();
    CSprite* GetContinueGameButton();


    //Init
    void Init();
    void Update(float deltatime = 0.0f, float alphaM = 1.0f);
    void Render();

protected:
    CSprite *continueGameButton;
    CSprite *newGameButton;

private:
};






#endif

