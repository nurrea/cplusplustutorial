#pragma once

#include "Player.h"

class GameBoard
{
	Player *m_player1;
	Player *m_player2;

public:
	GameBoard();
	~GameBoard();
	GameBoard(Player *p1, Player *p2);
	int init();
	int deinit();
};
