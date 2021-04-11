#include "Ball.h"
#include"Board.h"

Ball::Ball()
{
	Board board;
	m_XPosition = board.get_Width() / 2;
	m_YPosition = board.get_Height() / 2;
}

void Ball::set_XPosition(int xPosition)
{
	if (xPosition < 0)
		m_XPosition--;
	else
		m_XPosition++;
}

void Ball::set_YPosition(int yPosition)
{
	if (yPosition < 0)
	{
		m_YPosition--;
	}
	else
	{
		m_YPosition++;
	}
}

int Ball::get_XPosition()
{
	return m_XPosition;
}

int Ball::get_YPosition()
{
	return m_YPosition;
}
