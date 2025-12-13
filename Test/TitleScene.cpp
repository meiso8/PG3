#include "TitleScene.h"
#include"2d/DebugText.h"
using namespace KamataEngine;
//#include<stdio.h>
TitleScene::TitleScene()
{
    DebugText::GetInstance()->ConsolePrintf("TitleSceneの生成\n");
    //printf("TitleSceneの生成\n");
}

void TitleScene::Init()
{

    DebugText::GetInstance()->ConsolePrintf("シーン切り替えをしてTitleSceneになりました\n");
    //printf("シーン切り替えをしてTitleSceneになりました\n");
}

void TitleScene::Update()
{
    SceneChangeTrigger(STAGE);
}

void TitleScene::Draw()
{
    DebugText::GetInstance()->ConsolePrintf("TitleScene\n");
 
}
