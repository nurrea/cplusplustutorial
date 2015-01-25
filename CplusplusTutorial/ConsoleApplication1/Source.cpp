#include <iostream>
#include <vector>
#include "GameBoard.h"

using namespace std;

int main()
{
	//Player *p1 = new Player("Nick", PlayerOne);
	//Player *p2 = new Player("Tina", PlayerTwo);
	//GameBoard *gb = new GameBoard(p1, p2);
	GameBoard *gb = new GameBoard();
	gb->init();
	gb->deinit();

	std::vector<int> vDummy;
	for (int i = 0; i < 10; i++)
	{
		vDummy.push_back(i * 10);
	}

	std::vector<int> list;
	for (auto it = std::begin(vDummy); it != std::end(vDummy); ++it)
	{
		list.push_back(*it);
	}

	std::cout << "bar contains";
	for (auto it = std::begin(list); it != std::end(list); ++it)
	{
		std::cout << ' ' << *it;
	}

	char test[255];
	cin >> test;
	return 0;
}