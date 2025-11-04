#include<stdio.h>
#include"Enemy.h"
#include<memory>

using namespace std;
int main() {

	unique_ptr<Enemy> enemy = make_unique<Enemy>();

	while (true) {
		enemy->Update();
	}
	

	return 0;
}