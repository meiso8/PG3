#pragma once


#include<memory>
#include<array>
#include"IScene.h"
#include"StageScene.h"
#include"TitleScene.h"
#include"ClearScene.h"
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

