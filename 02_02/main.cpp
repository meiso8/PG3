#include<stdio.h>
#include<iostream>
#include<stdint.h>
#include <string>

#define MONEY 1226
#define A0 100

using namespace std;

uint32_t RecursiveMoney(uint32_t time) {

    if (time <= 1) {
        return time * A0;
    } else {
        return { RecursiveMoney(time - 1) * 3 - 50 };
    }

}

uint32_t NormalMoney(uint32_t time) {
    return time * MONEY;
}

void PrintMoney(uint32_t& money, uint32_t& normalMoney) {

    cout << "RecursiveMoney : ";
    cout << money << endl;
    cout << "MoneyNormal : ";
    cout << normalMoney << endl;
}

int main() {

    uint32_t recursiveMoney = 0;
    uint32_t normalMoney = 0;

    for (uint32_t time = 1; time < 100; ++time) {

        cout << "time : ";
        cout << time << endl;
        recursiveMoney = RecursiveMoney(time);
        normalMoney = NormalMoney(time);
        PrintMoney(recursiveMoney, normalMoney);

        if (normalMoney <= recursiveMoney) {
            break;
        }
    }


    return 0;
}