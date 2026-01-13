#include <thread>
#include <array>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

const uint32_t kWidth = 5;
const uint32_t kHeight = 11;

void DrawMap(const array< array<float, kWidth>, kHeight>& map) {

    for (int y = 0; y < kHeight; ++y) {

        for (int x = 0; x < kWidth; ++x) {
            if (map[y][x] == 0) {
                printf("□");
            } else if (map[y][x] == 1) {
                printf("■");
            } else {
                printf(" ");
            }
        }

        printf("\n");

    }

    printf("\n");
}

bool LoadFile(const std::string& fileName, array<array<float, kWidth>, kHeight>& map) {

    ifstream file(fileName);

    if (!file) {
        printf("ファイルを開けませんでした");
        return false;
    }

    string line;
    int y = 0;

    while (getline(file, line) && y < kHeight) {
        stringstream ss(line);
        string cell;
        int x = 0;
        while (getline(ss, cell, ',') && x < kWidth) {
            if (cell != "") {
                map.at(y).at(x) = std::stof(cell);
                x++;
            }
        }
        y++;
    }

    file.close();

    return true;
};

int main() {
    //mutex用の変数を宣言
    mutex mutex;
    //状況変数を宣言
    condition_variable condition;
    bool exit = false;
    array< array<float, kWidth>, kHeight> map;
    bool isMapReady = false;
    //バックグラウンドループ
    thread th([&]() {
        while (!exit) {
            this_thread::sleep_for(std::chrono::milliseconds(2000));
            {
                //unique_lockを使うと任意の場所でロックを解除できる。
                unique_lock <std::mutex>uniqueLock(mutex);
                //いくつかのメゾット（メンバ関数）がある。今回は、wait(待機)を使用
                //任意のタイミング、条件でスレッドを待機状態にできる。
                //スレッドを待機状態にして、排他処理のロックを解除する
                isMapReady = LoadFile("data.csv", map);
                condition.wait(uniqueLock, [&]() {return !map.empty() && isMapReady; });

            }

        }

        });


    int n = 0;
    bool mapDraw = false;
    //メインループ
    while (true) {

        if (isMapReady) {
            printf("マップの準備が完了しました\n");
            std::unique_lock<std::mutex>uniqueLock(mutex);
            //通知を受け取ると待機していたスレッドが再度動き出す
            condition.notify_all();
            if (!mapDraw) {
                printf("マップの描画を開始\n");
                DrawMap(map);
                mapDraw = true;
            }
        } else {
            printf("読み込み中\n");
        }

        if (mapDraw) {
            break;
        }

    }

    exit = true;
    th.join();
    return 0;
}