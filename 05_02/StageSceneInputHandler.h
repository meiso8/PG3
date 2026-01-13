#pragma once
#include"Selector.h"
#include"IStageSceneCommand.h"

class StageSceneInputHandler {
private:
    char keys[255] = { 0 };
    char preKeys[255] = { 0 };
    Selector* selector_;
    Unit* selectedUnit_;
    bool IsTrigger(const int& key);

    IStageSceneCommand* selectorMoveCommand_ = nullptr;
    IStageSceneCommand* selectUnitCommand_ = nullptr;
    IStageSceneCommand* unitMoveCommand_ = nullptr;
    IStageSceneCommand* unitMoveEndCommand_ = nullptr;

public:
    StageSceneInputHandler();
    void UpdateKeyState();
    ~StageSceneInputHandler();
    IStageSceneCommand* SelectorHandleInput(Selector* selector);
    IStageSceneCommand* UnitHandleInput(Unit* uint);
    bool CheckUndoStatus();


};
