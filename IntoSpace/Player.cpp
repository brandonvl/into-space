#include "Player.h"

Player::Player(float x, float y, float velX, float velY)
{
	SetX(x);
	SetY(y);
	SetVelocityX(velX);
	SetVelocityY(velY);
	m_lives = DEFAULT_LIVES;
}

Player::~Player()
{
}

void Player::SetX(float x)
{
	this->m_x = x > 0 ? x : 0; // assert x > 0.
}

void Player::SetY(float y)
{
	this->m_y = y > 0 ? y : 0; // assert y > 0
}

void Player::SetPos(float x, float y)
{
	SetX(x);
	SetY(y);
}

void Player::SetVelocityX(float velX)
{
	this->m_velocityX = velX;
}

void Player::SetVelocityY(float velY)
{
	this->m_velocityY = velY;
}

void Player::RemoveLife()
{
	if (this->m_lives > 0)
		this->m_lives--;
}

void Player::AddLife()
{
	this->m_lives++;
}

void Player::Render()
{
	// add rendering for player model
}

void Player::Update()
{
	// update player object
	this->m_x += m_velocityX;
	this->m_y += m_velocityY;
}


