#include <iostream>
#include <string>

#include "IBirds.h"
#include "IFlyingBirds.h"
#include "ISwimmingBirds.h"

#include "Chicken.h"
#include "Duck.h"

using namespace std;

int main() {

	IBirds* b = nullptr;
	Chicken chick;

	b = &chick;
	b->show();

	cout << endl;

	Duck duck;
	b = &duck;
	b->show();

	return 0;
}