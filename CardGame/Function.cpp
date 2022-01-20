#include "Header.h"
Game::Game()
{

}
void Game::Set(int n, Suit s)
{
	suit = s;
	Number = n;
}
void Game::Display()
{
	if (Number >= 6 && Number <= 10)
		cout << Number;
	else
	{
		switch (Number)
		{
		case(Jack):
		{
			cout << "J";
			break;
		}
		case(Queen):
		{
			cout << "Q";
			break;
		}
		case(King):
		{
			cout << "K";
			break;
		}
		case (Ace):
		{
			cout << "A";
			break;
		}
		}
	}
	switch (suit)
	{
	case(Clubs):
	{
		cout << static_cast<char>(5);
		break;
	}
	case(Diamonds):
	{
		cout << static_cast<char>(4);
		break;
	}
	case(Hearts):
	{
		cout << static_cast<char>(3);
		break;
	}
	case(Spades):
	{
		cout << static_cast<char>(6);
	}
	}
}