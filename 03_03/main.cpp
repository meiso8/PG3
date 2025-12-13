#include <stdio.h>
#include "Spaghetti.h"
#include <array>
int main() {

    std::array<Spaghetti*, 3>spaghettis;

    spaghettis[0] = new Spaghetti();
    spaghettis[1] = new Pasta();
    spaghettis[2] = new Penne();

    for (auto& spaghetti : spaghettis) {
        spaghetti->Update();
    }

    for (auto& spaghetti : spaghettis) {
        delete spaghetti;
    }

    return 0;
}