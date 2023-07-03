#pragma once
#include <iostream>
#include <string>

#include "IBirds.h"

using namespace std;

class Chicken: public IBirds
{

	void sound() override;
	void layingEggs() override;
	void eating() override;

	void show() override;
};

