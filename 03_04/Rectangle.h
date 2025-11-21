#pragma once

#include"IShape.h"

class Rectangle :public IShape

{
public:
    void Size()override;
    void Draw()override;
private:
    float width_ = 10.0f;
    float height_ = 10.0f;
};

