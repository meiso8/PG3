#include "ClearScene.h"
#include "Novice.h"

//#include<stdio.h>
ClearScene::ClearScene()
{
}
void ClearScene::Init()
{
}

void ClearScene::Update()
{
    SceneChangeTrigger(TITLE);
}

void ClearScene::Draw()
{
    Novice::ScreenPrintf(512, 30, "ClearScene");
}
