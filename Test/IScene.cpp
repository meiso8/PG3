#include"IScene.h"
#include"InputManager.h"
#include"Novice.h"
int IScene::sceneNo_ = TITLE;

IScene::~IScene() {}

void IScene::SceneChangeTrigger(const int& sceneNo)
{
    if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE)) {
        sceneNo_ = sceneNo;
    }

}

int IScene::GetScene() { return sceneNo_; }