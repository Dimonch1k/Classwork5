#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;

class Triangle : public Figura
{
private:
	int tri1;
	int tri2;

public:
	Triangle(int tri1, int tri2);
	double getAreaTri();
};

