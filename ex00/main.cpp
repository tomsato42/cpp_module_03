#include "ClapTrap.h"
#include <iostream>

int main() {
    ClapTrap clapTrap("Clappy");

    clapTrap.attack("target1");
    clapTrap.takeDamage(3);
    clapTrap.beRepaired(2);

    ClapTrap anotherClapTrap = clapTrap; // Copy constructor
    anotherClapTrap.attack("target2");

    ClapTrap yetAnotherClapTrap;
    yetAnotherClapTrap = clapTrap; // Assignment operator
    yetAnotherClapTrap.attack("target3");

    return 0;
}
