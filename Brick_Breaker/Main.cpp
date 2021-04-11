#include<iostream>
#include"Player.h"
#include<Windows.h>

int main()
{
	Player player;

	while (true)
	{
	   player.Draw();
	   player.Input();
	   player.Move();
	   Sleep(70);
	}

	std::cin.get();
}
