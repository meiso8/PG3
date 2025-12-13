#include "Circle.h"
#include <stdio.h>

constexpr float PI = 3.14159265358979323846f;

void Circle::Size()
{
    size_ = radius_ * radius_ * static_cast<float>(PI);
}

void Circle::Draw()
{
    printf("size %3.10f\n", size_);
}
