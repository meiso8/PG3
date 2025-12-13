#include "StageScene.h"
//#include<stdio.h>
#include"2d/DebugText.h"
#include"KamataEngine.h"
using namespace KamataEngine;

StageScene::StageScene()
{
    DebugText::GetInstance()->ConsolePrintf("StageSceneの生成\n");

}
void StageScene::Init() {

    DebugText::GetInstance()->ConsolePrintf("シーン切り替えをしてStageSceneになりました\n");
}


void StageScene::Update()
{
    SceneChangeTrigger(CLEAR);
}

void StageScene::Draw()
{
    DebugText::GetInstance()->ConsolePrintf("StageScene\n");
}
