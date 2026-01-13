#pragma once

enum SCENE { STAGE };

class IScene {
protected:
    static int sceneNo_;
public:
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual ~IScene();
    int GetScene();
protected:
    void SceneChangeTrigger(const int& sceneNo);
};