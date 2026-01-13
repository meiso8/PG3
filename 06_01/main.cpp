#include <stdio.h>
#include <thread>

int main() {

    std::thread th1(printf, "thread1\n");
    th1.join();

    std::thread th2(printf, "thread2\n");
    th2.join();

    std::thread th3(printf, "thread3\n");
    th3.join();

    return 0;
}