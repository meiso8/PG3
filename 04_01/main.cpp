#include<stdio.h>
#include<memory>
#include"GameManager.h"
int main() {

    std::unique_ptr<GameManager> gameManager = std::make_unique<GameManager>();

    gameManager->Run();

    return 0;
}