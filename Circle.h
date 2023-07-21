#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;

class Circle : public Figura
{
private:
	double radius;

public:
	Circle(double radius);
	double getAreaCirc();
};

