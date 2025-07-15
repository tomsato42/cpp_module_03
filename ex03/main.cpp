#include "DiamondTrap.h"

#include <iostream>

int main()
{
    DiamondTrap diamondTrap("HOGE");
    std::cout << std::endl;
    diamondTrap.showStatus();
    diamondTrap.whoAmI();
    std::cout << std::endl;
    diamondTrap.attack("target1");
    diamondTrap.takeDamage(42);
    diamondTrap.beRepaired(42);
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    return 0;
}
