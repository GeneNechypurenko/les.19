#pragma once
#include <iostream>
#include <string>

#include "IBirds.h"
#include "IFlyingBirds.h"

using namespace std;

class Parrot: public IBirds, public IFlyingBirds
{
public:
	void sound() override;
	void layingEggs() override;
	void eating() override;

	void fly() override;

	void show() override;
};

