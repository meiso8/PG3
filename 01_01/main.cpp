#include<stdio.h>
#include<list>
#include<iostream>

using namespace std;

/// @brief •¶š—ñ‚ğ•\¦‚·‚é
/// @param world 
void Print(list<const char*>& world) {
    for (auto itr = world.begin(); itr != world.end(); ++itr) {
        std::cout << *itr << "\n";
    }

}

/// @brief •¶š—ñ‚ğ‘}“ü‚·‚é
/// @param world 
/// @param TagWord ‘}“ü‚·‚éêŠ‚Ì•¶š—ñ
/// @param InputWord ‘}“ü‚·‚é•¶š—ñ
void Insert(list<const char*>& world, const char* TagWord, const char* InputWord) {
    for (std::list<const char*>::iterator itr = world.begin(); itr != world.end(); ++itr) {
        if (*itr == TagWord) {
            itr = world.insert(itr, InputWord);
            ++itr;
        }
    }
}


int main() {

    //‰w–¼ƒŠƒXƒg
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

    //•¶š‚ğo—Í‚·‚é
    std::cout << "1970”N" << "\n";
    Print(stations);

    //•¶š‚ğ‘}“ü‚·‚é
    Insert(stations, "Tabata", "Nishi-Nippori");

    //•¶š‚ğo—Í‚·‚é
    std::cout << "\n2019”N" << "\n";
    Print(stations);

    //•¶š‚ğ‘}“ü‚·‚é
    Insert(stations, "Tamachi", "Takanawa Geteway");

    //•¶š‚ğo—Í‚·‚é
    std::cout << "\n2020”N" << "\n";
    Print(stations);



    return 0;
}