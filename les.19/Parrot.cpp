#include "Parrot.h"

void Parrot::sound()
{
	cout << "Hello!" << endl;
}

void Parrot::layingEggs()
{
	cout << "I lay tiny little eggies" << endl;
}

void Parrot::eating()
{
	cout << "Love to eat grain" << endl;
}

void Parrot::fly()
{
	cout << "Like a jet plane!" << endl;
}

void Parrot::show()
{
	cout << "I am smartiest parrot in the whole world!" << endl;
	sound();
	layingEggs();
	eating();
	fly();
}