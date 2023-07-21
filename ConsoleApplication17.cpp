#include <iostream>
#include <vector>

#include "Figura.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


#include "Plane.h"
#include "Airport.h"
#include "Cargo.h"
#include "Military.h"
#include "Passanger.h"


using namespace std;


/*
int main()
{
    Figura figura;
   
    int rec1 = 0;
    int rec2 = 0;

    int tri1 = 0;
    int tri2 = 0;

    double radius = 0.0;

    cout << "Enter the side A in rectangle: "; cin >> rec1;
    cout << "Enter the side B in rectangle: "; cin >> rec2;
    cout << "\n";
    cout << "Enter the first katet in right triangle: "; cin >> tri1;
    cout << "Enter the second katet in right triangle: "; cin >> tri2;
    cout << "\n";
    cout << "Enter the radius for the circle: "; cin >> radius;
    cout << "\n\n";

    Rectangle rectangle(rec1, rec2);
    Triangle triangle(tri1, tri2);
    Circle myCircle(radius);

    int areaRectangle = rectangle.getAreaRec();
    int areaTriangle = triangle.getAreaTri();
    double areaCircle = myCircle.getAreaCirc();

    cout << "Rectangle: " << areaRectangle << endl;
    cout << "Triangle: " << areaTriangle << endl;
    cout << "Circle: " << areaCircle << endl;
}*/







int main() {

    Plane* cargo = new Cargo();
    Plane* passanger = new Passanger();
    Plane* military = new Military();

    Airport airport;

    airport.addPlane(cargo);
    airport.addPlane(passanger);
    airport.addPlane(military);

    airport.getPlanesReviews();
}

