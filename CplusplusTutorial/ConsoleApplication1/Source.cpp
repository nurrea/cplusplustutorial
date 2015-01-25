#include <iostream>
#include <string>
#include <vector>

using namespace std;

const double pi = 3.14159;
const char newline = '\n';

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
	void something();
	~Player();
};

Player::~Player()
{

}

Player::Player()
{
	
}

Player::Player(string i_name, GamePlayerNumber i_playerNumber)
{
	name = i_name;
	m_playerNumber = i_playerNumber;
}
void Player::something()
{

}

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

GameBoard::GameBoard()
{
	//m_player1 = NULL;
	m_player2 = NULL;
}

GameBoard::GameBoard(Player *player1, Player *player2)
{
	m_player1 = player1;
	m_player2 = player2;
}

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

	string test;
	cin >> test;
	return 0;
}