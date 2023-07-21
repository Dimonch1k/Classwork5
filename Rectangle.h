#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;


class Rectangle : public Figura
{
private:
	int rec1;
	int rec2;

public:
	Rectangle(int rec1, int rec2);
	int getAreaRec();

	Rectangle() = default;
};

