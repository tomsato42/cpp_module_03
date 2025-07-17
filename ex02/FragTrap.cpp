#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, getDefaultHitPoints(), getDefaultEnergyPoints(), getDefaultAttackDamage())
{
    std::cout << "\033[1mFragTrap\033[0m: \033[1m" << getName() << "\033[0m " << "\033[32mconstructed!\033[0m"
              << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "\033[1mFragTrap\033[0m: \033[1m" << getName() << "\033[0m " << "\033[31mdestroyed!\033[0m"
              << std::endl;
}

void
FragTrap::highFivesGuys()
{
    std::cout << "\033[1mFragTrap\033[0m: \033[1m" << getName() << "\033[0m"
              << " says: Hey everyone! Let's celebrate with some positive high fives! Who's with me?!" << std::endl;
}
unsigned int
FragTrap::getDefaultHitPoints()
{
    return 100;
}
unsigned int
FragTrap::getDefaultEnergyPoints()
{
    return 100;
}
unsigned int
FragTrap::getDefaultAttackDamage()
{
    return 30;
}
