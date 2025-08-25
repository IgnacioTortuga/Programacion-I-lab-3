#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Pokemon.h"
#include "Battle.h"
using namespace std;

// Función alternativa main_
void main_() {
    srand(time(0));
    Pokemon bulbasaur(60, 25, "Bulbasaur");
    Pokemon squirtle(55, 28, "Squirtle");

    bulbasaur.PokemonStats();
    squirtle.PokemonStats();

    Battle b(bulbasaur, squirtle);
    b.fight();
}

// Puedes llamar a main_ desde aquí para pruebas
int main() {
    main_();
    return 0;
}