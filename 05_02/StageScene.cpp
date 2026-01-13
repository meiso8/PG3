#include "StageScene.h"

using namespace std;
StageScene::StageScene() {
    inputHandler_ = make_unique<StageSceneInputHandler>();
    selector_ = std::make_unique<Selector>();
}

void StageScene::Init() {
    selector_->Init();
};

void StageScene::Update() {

    inputHandler_->UpdateKeyState();

    if (inputHandler_->CheckUndoStatus()) {
        //Undoがあったら
    }

    if (selector_->GetSelectMode() == SELECTOR) {
        command_ = inputHandler_->SelectorHandleInput(selector_.get());
    } else if (selector_->GetSelectMode() == UNIT) {
        command_ = inputHandler_->UnitHandleInput(selector_->GetSelectedUnitAddress());
    }

    selector_->Update();

    SetCommand();
}

void StageScene::Draw() {

    selector_->Draw();
}
void StageScene::SetCommand()
{
    if (command_) {
        command_->Exec();
        if (commandHistory_.empty()) {
            commandHistory_.push_back(command_);
            commandHistoryItr_ = commandHistory_.end();
        } else if (commandHistoryItr_ == commandHistory_.end()) {
            commandHistory_.push_back(command_);
            commandHistoryItr_ = commandHistory_.end();
        } else {
            *commandHistoryItr_ = command_;
            commandHistoryItr_++;
        }
    }
};