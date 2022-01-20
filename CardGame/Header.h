#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Suit { Clubs, Diamonds, Hearts, Spades};

const int Jack = 11;
const int Queen = 12;
const int King = 13;
const int Ace = 14;

class Game
{
private:
	int Number;
	Suit suit;
public:
	Game();
	void Set(int n, Suit s);
	void Display();
};