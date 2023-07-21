#include "Circle.h"

Circle::Circle(double myRadius) : Figura() {
	this->radius = myRadius;
}

double Circle::getAreaCirc() {
	double square = PI * pow(radius, 2);
	return square;
}