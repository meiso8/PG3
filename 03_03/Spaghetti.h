#pragma once
class Spaghetti
{
public:
    virtual ~Spaghetti();
    virtual void Update();
};

class Pasta :public Spaghetti {
    void Update()override;
};

class Penne :public Spaghetti {
    void Update()override;
};