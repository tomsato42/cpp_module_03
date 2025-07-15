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
ScavTrap::guardGate()
{
    std::cout << "\033[1mScavTrap\033[0m: \033[1m" << getName() << "\033[0m "
              << "\033[36mis now in Gate Keeper mode!\033[0m" << std::endl;
}
void
ScavTrap::attack(const std::string &target)
{
    if (getEnergyPoints() <= 0)
    {
        std::cout << "\033[1m" << getName() << "\033[0m "
                  << "\033[31mhas no energy points left to attack!\033[0m" << std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);
    std::cout << "\033[1m" << getName() << "\033[0m "
              << "\033[36mBRORORORO!!\033[0m \033[33mattacks\033[0m " << target << " like a racing engine, causing "
              << "\033[1m" << getAttackDamage() << "\033[0m points of damage!" << std::endl;
}
