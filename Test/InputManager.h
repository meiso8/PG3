#pragma once

class InputManager
{
private:
    // キー入力結果を受け取る箱
    char keys[256] = { 0 };
    char preKeys[256] = { 0 };
    static InputManager* instance_;
public:
    void Update();
    /// @briefキーを押した瞬間
    bool IsTriggerKey(const int& key);
    static GetInstance() {
        if (instance_ == nullptr) {
            instance_ = new InputManager();
        }
        return instance_;
    };
};

