#include<stdio.h>
#include<iostream>
#include<stdint.h>
#include <string>

//最低賃金
#define MONEY 1226
//初項
#define A0 100

using namespace std;

/// @brief 再帰賃金体系を計算する関数
/// @param time 時間
/// @return 再帰賃金体系の合計値
uint32_t RecursiveMoney(uint32_t time) {

    if (time <= 1) {
        return time * A0;
    } else {
        return { RecursiveMoney(time - 1) * 3 - 50 };
    }

}

/// @brief 一般賃金体系を計算する関数
/// @param time 時間
/// @return 一般賃金体系の合計値
uint32_t NormalMoney(uint32_t time) {
    return time * MONEY;
}

int main() {

    uint32_t recursiveMoney = 0;
    uint32_t normalMoney = 0;

    for (uint32_t time = 1; time < 100; ++time) {

        //お賃金を計算する
        recursiveMoney = RecursiveMoney(time);
        normalMoney = NormalMoney(time);

        //文字を出力する
        cout << "time : ";
        cout << time << endl;
        cout << "RecursiveMoney : ";
        cout << recursiveMoney << endl;
        cout << "MoneyNormal : ";
        cout << normalMoney << endl;

        if (normalMoney <= recursiveMoney) {
            //上回ったら抜ける
            break;
        }
    }

    return 0;
}