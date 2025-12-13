#include "StageScene.h"
#include "Novice.h"

StageScene::StageScene()
{

}
void StageScene::Init() {
}


void StageScene::Update()
{
    SceneChangeTrigger(CLEAR);
}

void StageScene::Draw()
{
    Novice::ScreenPrintf(256, 30, "StageScene");
}
