#include "InputManager.h"
#include<iostream>
#include"Novice.h"

InputManager* InputManager::instance_ = nullptr;

void InputManager::Update()
{
    // キー入力を受け取る
    memcpy(preKeys, keys, 256);
    Novice::GetHitKeyStateAll(keys);
}

bool InputManager::IsTriggerKey(const int& key)
{
    if (keys[key] && !preKeys[key]) {
        return true;
    }

    return false;
}
