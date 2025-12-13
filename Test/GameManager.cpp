#include "GameManager.h"

GameManager::GameManager()
{
    sceneArr_[TITLE] = std::make_unique<TitleScene>();
    sceneArr_[STAGE] = std::make_unique<StageScene>();
    sceneArr_[CLEAR] = std::make_unique<ClearScene>();

    currentSceneNo_ = TITLE;
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{

    while (true) {
        prevSceneNo_ = currentSceneNo_;
        currentSceneNo_ = sceneArr_[currentSceneNo_]->GetScene();
    
        if (prevSceneNo_ != currentSceneNo_) {
            sceneArr_[currentSceneNo_]->Init();
        }

        sceneArr_[currentSceneNo_]->Update();

        sceneArr_[currentSceneNo_]->Draw();

    }
 
    return 0;
}
