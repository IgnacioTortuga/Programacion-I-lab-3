#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
    int hp;
    int attack;
    string name;

public:
    Pokemon(int hp, int attack, string name);
    int gethp() const;
    int getattack() const;
    string getname() const;
    void sethp(int newhp);
    void PokemonStats() const;
};