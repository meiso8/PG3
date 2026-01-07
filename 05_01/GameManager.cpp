#include "GameManager.h"
#include "Novice.h"
#include "StageScene.h"


const char kWindowTitle[] = "LE2A_19_ヨシダ_トモカ_PG3_05_01";

GameManager::GameManager()
{
    // ライブラリの初期化
    Novice::Initialize(kWindowTitle, 1280, 720);

    sceneArr_[STAGE] = std::make_unique<StageScene>();

    currentSceneNo_ = STAGE;
    sceneArr_[currentSceneNo_]->Init();
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{

    Novice::GetHitKeyStateAll(keys);

    while (Novice::ProcessMessage() == 0) {

        // フレームの開始
        Novice::BeginFrame();

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
