#include "Rectangle.h"
#include<stdio.h>
void Rectangle::Size()
{
    size_ = width_ * height_;
}

void Rectangle::Draw()
{
    printf("size %3.0f\n", size_);
}

