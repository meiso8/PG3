#include "StageScene.h"
#include<stdio.h>
StageScene::StageScene()
{
    printf("StageSceneの生成\n");
}
void StageScene::Init() {

    printf("シーン切り替えをしてStageSceneになりました\n");

}


void StageScene::Update()
{
    SceneChangeTrigger(CLEAR);
}

void StageScene::Draw()
{

    printf("StageScene\n");
}
