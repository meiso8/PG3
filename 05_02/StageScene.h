#pragma once
#include "IScene.h"
#include "StageSceneInputHandler.h"
#include <memory>
#include "Command.h"
#include"Selector.h"
#include<list>

class StageScene :public IScene
{
private:
    std::unique_ptr<StageSceneInputHandler>inputHandler_ = nullptr;
    IStageSceneCommand* command_ = nullptr;
    std::list<IStageSceneCommand*>commandHistory_;
    std::list<IStageSceneCommand*>::iterator commandHistoryItr_;
    std::unique_ptr<Selector>selector_ = nullptr;
public:
    StageScene();

    void Init()override;
    void Update()override;
    void Draw()override;
    void SetCommand();
};

