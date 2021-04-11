#pragma once
class Ball
{
private:
	int m_XPosition, m_YPosition;

public:
	Ball();
	void set_XPosition(int xPosition);
	void set_YPosition(int yPosition);
	int get_XPosition();
	int get_YPosition();
};

