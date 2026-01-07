#pragma once
#include "KamataEngine.h"

class Player
{
private:
    uint32_t textureHandle_ = 0;
    KamataEngine::Vector2 pos_ = { 0.0f };
    float speed_ = { 0.0f };
    KamataEngine::Sprite* sprite_ = nullptr;
public:
    Player();
    ~Player();

    void Init();
    void Update();
    void Draw();
    //メンバ関数
    void MoveRight();
    void MoveLeft();
};

