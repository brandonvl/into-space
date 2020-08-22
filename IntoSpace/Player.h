#ifndef PLAYER_H
#define PLAYER_H
#include "constants.h" // player constants
class Player
{
private:
	int m_lives; 
	float m_x, m_y, m_velocityX, m_velocityY;

public:
	Player(float x = 0, float  y = 0, float  velX = 0, float  velY = 0);
	~Player();
	void SetX(float x);
	void SetY(float y);
	void SetPos(float x, float y);
	void SetVelocityX(float velocityY);
	void SetVelocityY(float velocityY);
	void RemoveLife();
	void AddLife();
	void Render();
	void Update();
};

#endif // !PLAYER_H
	