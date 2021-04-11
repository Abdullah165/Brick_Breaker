#include<iostream>
#include"Board.h"
#include"Player.h"
#include"Ball.h"
#include<Windows.h>

int main()
{
	Board board;
	Player player;
	Ball ball;

	while (true)
	{
	   player.Draw();
	   player.Input();
	   player.Move();
	   Sleep(70);
	}

	std::cin.get();
}