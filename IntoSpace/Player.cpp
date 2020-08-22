#include "Player.h"

Player::Player(float x, float y, float velX, float velY)
{
	set_x(x);
	set_y(y);
	set_velX(velX);
	set_velY(velY);
	lives = DEFAULT_LIVES;
}

Player::~Player()
{
}

void Player::set_x(float x)
{
	this->x = x > 0 ? x : 0; // assert x > 0.
}

void Player::set_y(float y)
{
	this->y = y > 0 ? y : 0; // assert y > 0
}

void Player::set_pos(float x, float y)
{
	set_x(x);
	set_y(y);
}

void Player::set_velX(float velX)
{
	this->velX = velX;
}

void Player::set_velY(float velY)
{
	this->velY = velY;
}

void Player::remove_life()
{
	if (lives > 0)
		lives--;
}

void Player::add_life()
{
	lives++;
}

void Player::render()
{
	// add rendering for player model
}

void Player::update()
{
	// update player object
	this->x += velX;
	this->y += velY;
}


