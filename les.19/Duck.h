#pragma once
#include <iostream>
#include <string>

#include "IBirds.h"
#include "ISwimmingBirds.h"
#include "IFlyingBirds.h"

using namespace std;

class Duck: public IBirds, public ISwimmingBirds, public IFlyingBirds
{

public:

	void sound() override;
	void layingEggs() override;
	void eating() override;

	void fly() override;

	void swim() override;

	void show() override;
};