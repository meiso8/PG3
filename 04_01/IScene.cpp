#include "IScene.h"
#include <stdio.h>
int IScene::sceneNo_ = TITLE;

IScene::~IScene() {}

void IScene::SceneChangeTrigger(const int& sceneNo)
{
    printf("次のシーンに進む場合1を続ける場合は0を押してください\n");
    int num = 0;
    scanf_s("%d", &num);
   
    
    if (num != 0) {
        sceneNo_ = sceneNo;
    }
}

int IScene::GetScene() { return sceneNo_; }