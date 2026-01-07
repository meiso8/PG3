#include "Player.h"
#include "KamataEngine.h"
using namespace KamataEngine;


Player::Player()
{
    textureHandle_ = TextureManager::Load("white1x1.png");
    sprite_ = Sprite::Create(textureHandle_, { 0,100 });
    sprite_->SetSize({ 25,25 });
    speed_ = 2.0f;
}

Player::~Player()
{
    delete sprite_;
}

void Player::Init()
{
    pos_ = { 0,100 };
    speed_ = 2.0f;
}

void Player::Update()
{
    sprite_->SetPosition(pos_);
}

void Player::Draw()
{
    Sprite::PreDraw();
    sprite_->Draw();
    Sprite::PostDraw();
}

void Player::MoveRight()
{
    pos_.x += speed_;
}

void Player::MoveLeft()
{
    pos_.x -= speed_;
}
