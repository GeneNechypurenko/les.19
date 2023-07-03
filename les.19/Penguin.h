#pragma once
#include <iostream>
#include <string>

#include "IBirds.h"
#include "ISwimmingBirds.h"

using namespace std;

class Penguin : public IBirds, public ISwimmingBirds
{

public:

	void sound() override;
	void layingEggs() override;
	void eating() override;

	void swim() override;

	void show() override;
};