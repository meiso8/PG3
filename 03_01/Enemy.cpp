#include "Enemy.h"
#include <stdio.h>

//テーブルにポインタを入れるために別途定義が必要　static
void(Enemy::* Enemy::spFuncTable[])() {
    &Enemy::Approach,
        & Enemy::Shot,
        & Enemy::Exit,
};

void Enemy::Update()
{
    //とりあえずフェーズが最大になったら処理を終える
    if (phaseNum_ >= MAX_PHASE) {
        return;
    }

    //呼び出す
    (this->*spFuncTable[static_cast<size_t>(phase_)])();

    //フェーズを足す
    phaseNum_++;
    //フェーズを代入する
    phase_ = static_cast<PHASE>(phaseNum_ % MAX_PHASE);

    //pFunc = &Enemy::Approach;

    //メンバ関数ポインタ内の関数を呼び出す
    //(this->*pFunc)();
}

void Enemy::Approach()
{
    printf("Approach\n");
}

void Enemy::Shot()
{
    printf("Shot\n");
}

void Enemy::Exit()
{
    printf("Exit\n");
}
