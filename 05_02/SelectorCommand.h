#pragma once
#include"IStageSceneCommand.h"
#include"Selector.h"

class SelectorMoveCommand : public IStageSceneCommand {
public:
    SelectorMoveCommand(Selector* selector, int x, int y)
        :selector_(selector), x_(x), y_(y) {
    };
    void Exec()override;
private:
    Selector* selector_;
    int x_;
    int y_;
};

class SelectUnitCommand : public IStageSceneCommand {
public:
    SelectUnitCommand(Selector* selector) :selector_(selector) {};
    void Exec()override;
private:
    Selector* selector_;
};

class UnitMoveCommand :public IStageSceneCommand {
public:
    UnitMoveCommand(Unit* uint, int x, int y) :unit_(uint), x_(x), y_(y) {};
    void Exec()override;
private:
    Unit* unit_;
    int x_;
    int y_;
};

class UnitMoveEndCommand :public IStageSceneCommand {
public:
    UnitMoveEndCommand(Unit* unit, Selector* selector) :unit_(unit), selector_(selector) {};
    void Exec()override;
private:
    Unit* unit_;
    Selector* selector_;
};

