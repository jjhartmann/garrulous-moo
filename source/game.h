/////////////////////////////////////////
// Game Class

#if !defined(STAGE_GAME_H)
#define STAGE_GAME_H

#include "scene.h"

class Game : public Scene 
{
public:
    Game() {}
    ~Game();

    // Init the gems
    void Init();

    // Update game
    void Update(float deltaTime = 0.0f, float alphaMul = 0.0f);

    // Render Game
    void Render();

    void SwitchToScene(const char *scene_name);
    void AddToRoundScore(int score);
    void PauseGame();
    void ResumeGame();
    void NewGame();



protected:
    // Score for the current round
    int m_currentRoundScore;

    //UI Components
    CLabel *m_ScoreLabel;
    CSprite *m_pauseSprite;
    CSprite *m_GemSprite;

private:
    void initUI();
};




#endif