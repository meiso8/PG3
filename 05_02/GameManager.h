#pragma once


#include <memory>
#include <array>
#include "IScene.h"

class GameManager
{
private:
    std::array< std::unique_ptr<IScene>, 3> sceneArr_;
    int currentSceneNo_;
    int prevSceneNo_;

    // キー入力結果を受け取る箱
    char keys[256] = { 0 };

public:
    GameManager();
    ~GameManager();
    int Run();
};

