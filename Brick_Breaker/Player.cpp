#include "Player.h"
#include"Board.h"
#include"Ball.h"
#include<conio.h>
#include<iostream>
#include<string>

Ball ball;
Board board;
std::string s = "####################################";

Player::Player()
{
	m_XPosition = board.get_Width() / 3;
	m_YPosition = board.get_Height() / 1.1;
	m_playerYPosition = m_YPosition;
}

void Player::Draw()
{

	system("cls");
	for (int height = 0; height < board.get_Height(); height++)
	{
		for (int width = 0; width < board.get_Width(); width++)
		{
			if (height == 0 || height == board.get_Height() - 1) std::cout << "*";
			else if (width == 0 || width == board.get_Width() - 1) std::cout << "*";
			else if (height == 2 && width == 5) std::cout << s;
			else if (ball.get_YPosition() == 2)
			{
				s[ball.get_XPosition() - 5] = ' ';
				m_playerYPosition++;
			}
			else if (ball.get_YPosition() == m_YPosition+1) m_playerYPosition--;
			else if (height == m_YPosition && width == m_XPosition) std::cout << "=========";
			else if (height == ball.get_YPosition() && width == ball.get_XPosition()) std::cout << "O";
			else std::cout << " ";
		}std::cout << "\n";
	}
}


void Player::Input()
{
	if (_kbhit())
	{
		char keyCode = _getch();

		switch (keyCode)
		{
		case 'a': direction = Left; break;
		case 'd': direction = Right; break;
		case 'x': exit(0); break;
		}
	}
}

void Player::Move()
{
	switch (direction)
	{
	case Left: m_XPosition -= 2; break;
	case Right: m_XPosition += 2; break;
	}

	if (ball.get_YPosition() < m_playerYPosition)
	{
		ball.set_YPosition(1);
	}
	else
	{
		m_playerYPosition--;
		ball.set_YPosition(-1);
	}
}

