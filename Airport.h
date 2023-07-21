#pragma once
#include <iostream>
#include <vector>
#include "Plane.h"

using namespace std;

class Airport
{
private:
	vector<Plane*> planes;

public:
	void addPlane(Plane* plane);
	void getPlanesReviews();

};

