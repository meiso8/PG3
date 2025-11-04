#include<stdio.h>
#include<iostream>
#include<time.h>

void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess);

int main() {

	srand(static_cast<unsigned int>(time(nullptr)));

	int inputNum = -1;

	while (inputNum != 1 || inputNum != 0) {
		scanf_s("%d", &inputNum);
	}

	int randNum = rand() % 6 + 1;

	if (randNum % 2 == 0) {
		//偶数
	} else {
		//奇数
	}

	return 0;
}