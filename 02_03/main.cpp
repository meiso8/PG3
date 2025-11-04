#include<stdio.h>
#include<iostream>
#include<time.h>

typedef void(*PFunc)(int, int);

/// @brief 
/// @param fn 呼び出したい関数へのポインタ 
/// @param delayMs 待機時間(ミリ秒)
/// @param roll サイコロの出目
/// @param userGuess ユーザーの入力(1==奇数 0==偶数)
void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess) {

    for (unsigned int i = 0; i < delayMs; ++i) {
        i++;
    };

    fn(roll, userGuess);
};

void ShowResult(int roll, int userGuess) {

    int judgeNum = roll % 2;

    if (judgeNum == userGuess) {
        printf("正解 : ");
    } else {
        printf("不正解 : ");
    };

    if (judgeNum == 0) {
        //偶数
        printf("%dは偶数でした。\n", roll);
    } else {
        //奇数
        printf("%dは奇数でした。\n", roll);
    };

};


int main() {

    //乱数の初期化
    srand(static_cast<unsigned int>(time(nullptr)));

    //関数ポインタの箱に代入する
    PFunc pFunc;
    pFunc = &ShowResult;

    //仮に-1を入れておく
    int userGuess = -1;

    //0か1以外だったら繰り返す
    while (true) {
        printf("0 == 偶数 1 == 奇数として数字を入力して下さい\n");
        scanf_s("%d", &userGuess);

        if (userGuess == 0 || userGuess == 1) {
            break;
        }
    };

    //乱数を生成
    int roll = rand() % 6 + 1;

    //関数呼び出し
    DelayReveal(pFunc, 3000, roll, userGuess);

    return 0;
}