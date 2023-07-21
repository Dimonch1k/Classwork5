#include "Airport.h"


void Airport::addPlane(Plane* plane) {
	planes.push_back(plane);
}

void Airport::getPlanesReviews() {
	for (int i = 0; i < planes.size(); i++) {
		cout << planes[i]->doFly();
	}
}