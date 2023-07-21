#include "Triangle.h"

Triangle::Triangle(int triang1, int triang2) : Figura() {
	this->tri1 = triang1;
	this->tri2 = triang2;
}

double Triangle::getAreaTri() {
	double square = tri1 * tri2 * 0.5;
	return square;
}


