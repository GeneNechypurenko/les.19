#pragma once
#include <iostream>
#include <string>

using namespace std;

class IBirds
{

public:

	virtual void sound() abstract;
	virtual void layingEggs() abstract;
	virtual void eating() abstract;

	virtual void show() abstract;
};