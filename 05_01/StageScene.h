#pragma once
#include "IScene.h"
#include "InputHandler.h"
#include <memory>

class Player;
class StageScene :public IScene
{
private:
    std::unique_ptr<InputHandler>inputHandler_ = nullptr;
    std::unique_ptr < Player> player_;
    ICommand* iCommand_ = nullptr;
public:
    StageScene();

    void Init()override;
    void Update()override;
    void Draw()override;
};

