#include "Pokemon.h"

Pokemon::Pokemon(int hp, int attack, string name) : hp(hp), attack(attack), name(name) {
    cout << "Pokemon " << name << " created with custom stats." << endl;
}

int Pokemon::gethp() const {
    return hp;
}

int Pokemon::getattack() const {
    return attack;
}

string Pokemon::getname() const {
    return name;
}

void Pokemon::sethp(int newhp) {
    hp = newhp;
}

void Pokemon::PokemonStats() const {
    cout << "Name: " << name << endl;
    cout << "HP: " << hp << endl;
    cout << "Attack: " << attack << endl;
}