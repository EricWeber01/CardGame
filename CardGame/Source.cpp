#include "Header.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Game deck[36];
	int i;
	for (i = 0; i < 36; i++)
	{
		int num = (i % 7) + 6;
		Suit su = Suit(i / 7);
		deck[i].Set(num, su);
	}
	cout << "Исходная колода" << "\n";
	for (i = 0; i < 36; i++)
	{
		deck[i].Display();
		cout << " ";
		if (!((i + 1) % 7))
			cout << "\n";
	}
	srand(time(NULL));
	for (i = 0; i < 36; i++)
	{
		int k = rand() % 36;
		Game tmp = deck[i];
		deck[i] = deck[k];
		deck[k] = tmp;
	}
	cout << "Перемешаная колода" << "\n";
	for (i = 0; i < 36; i++)
	{
		deck[i].Display();
		cout << " ";
		if (!(i + 1) % 7)
			cout << "\n";
	}
}