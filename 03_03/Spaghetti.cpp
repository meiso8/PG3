#include "Spaghetti.h"
#include <stdio.h>


Spaghetti::~Spaghetti()
{
    printf("スパゲッティを食べた\n");
}

void Spaghetti::Update()
{
    printf("スパゲッティいただきます\n");
}

void Pasta::Update()
{
    printf("パスタいただきます\n");
}

void Penne::Update()
{
    printf("ペンネいただきます\n");
}
