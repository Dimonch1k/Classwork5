#pragma once
#include "Plane.h"

#include <iostream>
using namespace std;


class Cargo :
    public Plane
{
public:
    string doFly() override;
};

