#include <list>
#include <iostream>

using namespace std;

/// @brief 文字列を表示する
/// @param world 
void Print(list<const char*>& world) {
    for (auto itr = world.begin(); itr != world.end(); ++itr) {
        std::cout << *itr << "\n";
    }
}

/// @brief 文字列を挿入する
/// @param world 
/// @param TagWord 挿入する場所の文字列
/// @param InputWord 挿入する文字列
void Insert(list<const char*>& world, const char* TagWord, const char* InputWord) {
    for (std::list<const char*>::iterator itr = world.begin(); itr != world.end(); ++itr) {
        if (*itr == TagWord) {
            itr = world.insert(itr, InputWord);
            ++itr;
        }
    }
}


int main() {

    //駅名リスト
    list<const char*> stations{
        "Tokyo",
        "Kanda",
        "Akihabara",
        "Okachimachi",
        "Ueno",
        "Uguisudani",
        "Nippori",
        "Tabata",
        "Komagome",
        "Sugamo",
        "Otsuka",
        "Ikebukuro",
        "Mejiro",
        "Takadanobaba",
        "Shin-Okubo",
        "Shinjuku",
        "Yoyogi",
        "Harajuku",
        "Shibuya",
        "Ebisu",
        "Meguro",
        "Gotanda",
        "Osaki",
        "Shinagawa",
        "Tamachi",
        "Hamamatsucho",
        "Shimbashi",
        "Yurakucho" };

    //文字を出力する
    std::cout << "1970年" << "\n";
    Print(stations);

    //文字を挿入する
    Insert(stations, "Tabata", "Nishi-Nippori");

    //文字を出力する
    std::cout << "\n2019年" << "\n";
    Print(stations);

    //文字を挿入する
    Insert(stations, "Tamachi", "Takanawa Gateway");

    //文字を出力する
    std::cout << "\n2020年" << "\n";
    Print(stations);



    return 0;
}