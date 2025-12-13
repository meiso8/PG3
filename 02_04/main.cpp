#include <iostream>
#include <time.h>
#include <functional>

int main() {

    //乱数の初期化
    srand(static_cast<unsigned int>(time(nullptr)));

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

    //ラムダ式　リザルトを出力する
    std::function<void()> ShowResult = [&]() {

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

    //ラムダ式　時間で出力
    std::function<void(unsigned int)> DelayReveal = [&](unsigned int delayMs) {

        for (unsigned int i = 0; i < delayMs; ++i) {
            i++;
        };

        ShowResult();

        };

    //関数呼び出し
    DelayReveal(3000);

    return 0;
}