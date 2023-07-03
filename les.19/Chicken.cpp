#include "Chicken.h"

void Chicken::sound()
{
	cout << "Ko-ko-ko\n";
}

void Chicken::layingEggs()
{
	cout << "eggs are perfect for breakfast\n";
}

void Chicken::eating()
{
	cout << "I love grain\n";
}

void Chicken::show()
{
	cout << "I am chicken!\n";
	sound();
	layingEggs();
	eating();
}
