#include "StageSceneInputHandler.h"
#include"SelectorCommand.h"
#include "Novice.h"

bool StageSceneInputHandler::IsTrigger(const int& key)
{
    if (keys[key] && !preKeys[key]) {
        return true;
    }

    return false;
}
StageSceneInputHandler::StageSceneInputHandler()
{
    selectorMoveCommand_ = new SelectorMoveCommand(selector_, 0, 0);
    selectUnitCommand_ = new SelectUnitCommand(selector_);
    unitMoveCommand_ = new UnitMoveCommand(selectedUnit_, 0, 0);
    unitMoveEndCommand_ = new UnitMoveEndCommand(selectedUnit_, selector_);
}
void StageSceneInputHandler::UpdateKeyState()
{
    // キー入力を受け取る
    memcpy(preKeys, keys, 256);
    Novice::GetHitKeyStateAll(keys);
}

StageSceneInputHandler::~StageSceneInputHandler()
{
    delete unitMoveEndCommand_;
    delete unitMoveCommand_;
    delete  selectUnitCommand_;
    delete selectorMoveCommand_;
}

IStageSceneCommand* StageSceneInputHandler::SelectorHandleInput(Selector* selector)
{
    if (IsTrigger(DIK_W)) {
        return;
    }

    if (IsTrigger(DIK_A)) {
        return;
    }

    if (IsTrigger(DIK_S)) {
        return;
    }

    if (IsTrigger(DIK_D)) {
        return;
    }

    if (Novice::CheckHitKey(DIK_LCONTROL) && IsTrigger(DIK_Z)) {
        return;
    }

    return nullptr;
}

IStageSceneCommand* StageSceneInputHandler::UnitHandleInput(Unit* uint)
{

    if (IsTrigger(DIK_W)) {
        return;
    }

    if (IsTrigger(DIK_A)) {
        return;
    }

    if (IsTrigger(DIK_S)) {
        return;
    }

    if (IsTrigger(DIK_D)) {
        return;
    }

    if (Novice::CheckHitKey(DIK_LCONTROL) && IsTrigger(DIK_Z)) {
        return;
    }
    return nullptr;
}

bool StageSceneInputHandler::CheckUndoStatus()
{
    return false;
}
