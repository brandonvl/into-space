#ifndef INTOSPACE_GAME_H
#define INTOSPACE_GAME_H

class Game
{
public:
	Game(int width, int height);
	void Init();
	void ProcessInput();
	void Update(float deltaTime);
	void Render();
};
#endif // !INTOSPACE_GAME_H

