#include "ClearScene.h"
#include"2d/DebugText.h"
using namespace KamataEngine;

//#include<stdio.h>
ClearScene::ClearScene()
{
    DebugText::GetInstance()->ConsolePrintf("ClearSceneの生成\n");
    //printf("ClearSceneの生成\n");
}
void ClearScene::Init()
{
    DebugText::GetInstance()->ConsolePrintf("シーン切り替えをしてClearSceneになりました\n");

}

void ClearScene::Update()
{
    SceneChangeTrigger(TITLE);
}

void ClearScene::Draw()
{
    DebugText::GetInstance()->ConsolePrintf("ClearScene\n");
}
