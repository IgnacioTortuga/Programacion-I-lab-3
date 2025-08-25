#include "Battle.h"
#include <cstdlib>

Battle::Battle(Pokemon p1, Pokemon p2) : pokemon1(p1), pokemon2(p2) {
    cout << "Battle initialized between " << pokemon1.getname()
        << " and " << pokemon2.getname() << "." << endl;
}

void Battle::fight() {
    int turno = 1;

    while (pokemon1.gethp() > 0 && pokemon2.gethp() > 0) {
        if (turno == 1) {
            int MaxAtack = pokemon1.getattack();
            int attack = rand() % (pokemon1.getattack() + 1);
            int newhp = pokemon2.gethp() - attack;
            pokemon2.sethp(newhp > 0 ? newhp : 0);
            if (attack > MaxAtack / 2)
            {
                cout << " Critical Hit " << pokemon1.getname() << endl;
            }
            cout << pokemon1.getname() << " attaks! with " << attack << " damage! " << endl;
            cout << pokemon2.getname() << " HP is now " << newhp << endl;
            turno = 0;
        }
        else {
            int maxAtack = pokemon2.getattack();
            int attack = rand() % (pokemon2.getattack() + 1);
            int newhp = pokemon1.gethp() - attack;
            if (attack > maxAtack / 2)
            {
                cout << " Critical Hit " << pokemon2.getname() << endl;
            }
            pokemon1.sethp(newhp > 0 ? newhp : 0);
            cout << pokemon2.getname() << " attacks! with " << attack << "\n" "damage!" << endl;
            cout << pokemon1.getname() << " HP is now " << pokemon1.gethp() << endl;
            turno = 1;
        }
    }

    if (pokemon1.gethp() > 0) {
        cout << pokemon1.getname() << " wins the battle!" << endl;
    }
    else {
        cout << pokemon2.getname() << " wins the battle!" << endl;
    }
}