#include "TitleScene.h"
#include<stdio.h>
TitleScene::TitleScene()
{
    printf("TitleSceneの生成\n");
}
void TitleScene::Init()
{
    printf("シーン切り替えをしてTitleSceneになりました\n");
}

void TitleScene::Update()
{
    SceneChangeTrigger(STAGE);
}

void TitleScene::Draw()
{
    printf("TitleScene\n");
}
