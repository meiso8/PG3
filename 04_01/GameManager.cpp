#include "GameManager.h"
#include "Novice.h"
#include "InputManager.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

const char kWindowTitle[] = "LE2A_19_ヨシダ_トモカ_PG3_04_01";

GameManager::GameManager()
{
    // ライブラリの初期化
    Novice::Initialize(kWindowTitle, 1280, 720);

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

    while (Novice::ProcessMessage() == 0) {

        // フレームの開始
        Novice::BeginFrame();

        InputManager::GetInstance()->Update();

        prevSceneNo_ = currentSceneNo_;
        currentSceneNo_ = sceneArr_[currentSceneNo_]->GetScene();
    
        if (prevSceneNo_ != currentSceneNo_) {
            sceneArr_[currentSceneNo_]->Init();
        }

        sceneArr_[currentSceneNo_]->Update();

        sceneArr_[currentSceneNo_]->Draw();

        // フレームの終了
        Novice::EndFrame();

    }
 
    // ライブラリの終了
    Novice::Finalize();

    return 0;
}
