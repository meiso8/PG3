#pragma once
#include"Unit.h"

enum SelectMode {
    SELECTOR,
    UNIT,
};

class Selector
{
private:
    int mapX_;
    int mapY_;
    int mapSize_;

    int selectMode_;

    Unit* unit_;
    Unit* selectUnit_;
public:
    Selector();

    void Init();
    void Update();
    void Draw();

    void Move(int x, int y);
    void SelectUnit();
    const int& GetSelectMode() { return selectMode_; };
    Unit* GetSelectedUnitAddress() { return selectUnit_; }
};

