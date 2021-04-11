#pragma once
class Player
{
private:
	int m_XPosition, m_YPosition,m_playerYPosition;
	enum Direction
	{
		Left = 1,
		Right
	};
	Direction direction;

public:
	Player();
	void Input();
	void Move();
	void Draw();
};

