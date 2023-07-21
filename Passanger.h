#pragma once
#include "Plane.h"
#include <iostream>
using namespace std;

class Passanger :
    public Plane
{
public:
    string doFly() override;
};

