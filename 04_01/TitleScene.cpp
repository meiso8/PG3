#include "TitleScene.h"
#include "Novice.h"

//#include<stdio.h>
TitleScene::TitleScene()
{

}

void TitleScene::Init()
{

}

void TitleScene::Update()
{
    SceneChangeTrigger(STAGE);
}

void TitleScene::Draw()
{
    //文字を表示
    Novice::ScreenPrintf(10, 30, "TitleScene");
 
}
