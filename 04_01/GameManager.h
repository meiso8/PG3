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
public:
    GameManager();
    ~GameManager();
    int Run();
};

