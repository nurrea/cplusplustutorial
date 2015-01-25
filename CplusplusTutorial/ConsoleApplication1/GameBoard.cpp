#include <stddef.h>
#include "GameBoard.h"

int GameBoard::init()
{
	return 0;
}

int GameBoard::deinit()
{
	delete m_player1;
	m_player1 = NULL;
	return 0;
}

GameBoard::~GameBoard()
{
}

GameBoard::GameBoard() : m_player2(NULL), m_player1(NULL)
{
}

GameBoard::GameBoard(Player *i_player1, Player *i_player2)
{
	m_player1 = i_player1;
	m_player2 = i_player2;
}
