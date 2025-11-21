#pragma once

//インターフェイスのI
class IShape {
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;
protected:
    float size_ = 0.0f;
};