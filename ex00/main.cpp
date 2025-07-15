#include "ClapTrap.h"
#include <iostream>

int main() {
    ClapTrap clapTrap("Clappy");

    clapTrap.attack("target1");
    clapTrap.takeDamage(3);
    clapTrap.beRepaired(2);

    ClapTrap anotherClapTrap = clapTrap; // Copy constructor
    anotherClapTrap.attack("target2");

    ClapTrap yetAnotherClapTrap = clapTrap; // Assignment operator
    yetAnotherClapTrap.attack("target3");

    for (int i = 0; i < 9; i++)
    {
        clapTrap.attack("target1");
    }

    return 0;
}
