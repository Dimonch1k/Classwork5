#include "Rectangle.h"

Rectangle::Rectangle(int rect1, int rect2) : Figura() {
	this->rec1 = rect1;
	this->rec2 = rect2;
}


int Rectangle::getAreaRec() {
	int square = rec1 * rec2;
	return square;
}


