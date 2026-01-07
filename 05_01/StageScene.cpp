#include "StageScene.h"
#include "Player.h"
using namespace std;
StageScene::StageScene() {
    inputHandler_ = make_unique<InputHandler>();
    player_ = make_unique<Player>();

    inputHandler_->AssignMoveRightCommand2PressKeyD();
    inputHandler_->AssignMoveLeftCommand2PressKeyA();
}

void StageScene::Init() {
    player_->Init();
};

void StageScene::Update() {

    iCommand_ = inputHandler_->HandleInput();

    if (iCommand_) {
        iCommand_->Exec(*player_);
    }

    player_->Update();

}

void StageScene::Draw() {

    player_->Draw();
};