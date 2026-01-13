#include "Selector.h"
#include"Novice.h"
void Selector::Init()
{
    mapSize_ = 24;
    mapX_ = mapSize_ * 3;
    mapY_ = mapSize_ * 3;

}

void Selector::Update()
{
}

void Selector::Draw()
{
    Novice::DrawBox(mapX_,mapY_,mapSize_,mapSize_,0.0f,0xFF0000FF,kFillModeWireFrame);

}

void Selector::Move(int x, int y)
{
}

void Selector::SelectUnit()
{
}
