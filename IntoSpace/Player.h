#pragma once
const int DEFAULT_LIVES = 3;
class Player
{
private:
	int lives; 
	float x, y, velX, velY;

public:
	Player(float x = 0, float  y = 0, float  velX = 0, float  velY = 0);
	~Player();
	void set_x(float x);
	void set_y(float y);
	void set_pos(float x, float y);
	void set_velX(float velX);
	void set_velY(float velY);
	void remove_life();
	void add_life();
	void render();
	void update();
};

