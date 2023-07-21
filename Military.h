#pragma once
#include "Plane.h"
#include <iostream>
using namespace std;


class Military :
    public Plane
{
public:
    string doFly() override;
};

