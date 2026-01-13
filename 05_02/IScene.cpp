#include "IScene.h"

#include "Novice.h"
int IScene::sceneNo_ = STAGE;

IScene::~IScene() {}

void IScene::SceneChangeTrigger(const int& sceneNo)
{
    if (Novice::CheckHitKey(DIK_SPACE)) {
        sceneNo_ = sceneNo;
    }
}

int IScene::GetScene() { return sceneNo_; }