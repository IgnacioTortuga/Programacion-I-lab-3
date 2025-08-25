#pragma once
#include "Pokemon.h"
#include <iostream>
using namespace std;

class Battle {
private:
    Pokemon pokemon1;
    Pokemon pokemon2;

public:
    Battle(Pokemon p1, Pokemon p2);
    void fight();
};