#include "ScavTrap.h"

#include <iostream>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "\033[1mScavTrap\033[0m: \033[1m" << getName() << "\033[0m " << "\033[32mconstructed!\033[0m"
              << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "\033[1mScavTrap\033[0m: \033[1m" << getName() << "\033[0m " << "\033[31mdestroyed!\033[0m"
              << std::endl;
}
void
ScavTrap::guardGate() const
{
    std::cout << "\033[1mScavTrap\033[0m: \033[1m" << getName() << "\033[0m "
              << "\033[36mis now in Gate Keeper mode!\033[0m" << std::endl;
}