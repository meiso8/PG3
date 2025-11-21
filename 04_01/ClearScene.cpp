#include "ClearScene.h"

#include<stdio.h>
ClearScene::ClearScene()
{
    printf("ClearSceneの生成\n");
}
void ClearScene::Init()
{
    printf("シーン切り替えをしてClearSceneになりました\n");
}

void ClearScene::Update()
{
    SceneChangeTrigger(TITLE);
}

void ClearScene::Draw()
{
    printf("ClearScene\n");
}
