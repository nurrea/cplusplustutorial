#include <iostream>
#include <string>
#include <vector>

using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main()
{
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

	string test;
	cin >> test;
	return 0;
}

enum GamePlayerNumber
{
	PlayerOne,
	PlayerTwo
};

enum GamePieceType
{
	Normal,
	King
};

class GamePiece
{
	int x;
	int y;
	GamePieceType type;
};

class Player
{
	string name;
	GamePlayerNumber m_playerNumber;
	std::vector<GamePiece> m_pieces;

public:
	Player();
	Player(string, GamePlayerNumber);
};

Player::Player()
{

}

Player::Player(string p_name, GamePlayerNumber playerNumber)
{
	name = p_name;
	m_playerNumber = playerNumber;
}

class GameBoard
{
	Player player1;
	Player player2;

	public:
		GameBoard();
};

GameBoard::GameBoard()
{
	//player1 = new Player("Nick", PlayerOne);
	//player2 = new Player("Tina", PlayerTwo);
}