#pragma once
class Enemy
{
public:

    enum PHASE {
        APPROACH,
        SHOT,
        EXIT,
        MAX_PHASE
    };

    void Update();


private:
    //メンバ関数ポインタテーブル
    static void(Enemy::* spFuncTable[])();
    PHASE phase_ = PHASE::APPROACH;
    size_t phaseNum_ = phase_;
    void Approach();
    void Shot();
    void Exit();

    ////メンバ関数ポインタ
    //void(Enemy::* pFunc)();
};

