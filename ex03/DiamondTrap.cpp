#include "DiamondTrap.h"

#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name", getDefaultHitPoints(), getDefaultEnergyPoints(), getDefaultAttackDamage()),
      ScavTrap(name),
      FragTrap(name),
      name_(name)
{
    std::cout << "\033[1mDiamondTrap\033[0m: \033[1m" << name_ << "\033[0m " << "\033[32mconstructed!\033[0m"
              << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[1mDiamondTrap\033[0m: \033[1m" << name_ << "\033[0m " << "\033[31mdestroyed!\033[0m"
              << std::endl;
}
void
DiamondTrap::whoAmI()
{
    std::cout << "\033[1mDiamondTrap\033[0m: \033[1m" << name_ << "\033[0m aka \033[1m" << getName() << "\033[0m "
              << "I am a DiamondTrap, a combination of ScavTrap, and FragTrap!" << std::endl;
}
void
DiamondTrap::showStatus()
{
    std::cout << "\033[1mDiamondTrap\033[0m: \033[1m" << name_ << "\033[0m "
              << "Hit Points: " << getHitPoints() << ", "
              << "Energy Points: " << getEnergyPoints() << ", "
              << "Attack Damage: " << getAttackDamage() << std::endl;
}
unsigned int
DiamondTrap::getDefaultHitPoints()
{
    return FragTrap::getDefaultHitPoints();
}
unsigned int
DiamondTrap::getDefaultEnergyPoints()
{
    return ScavTrap::getDefaultEnergyPoints();
}
unsigned int
DiamondTrap::getDefaultAttackDamage()
{
    return FragTrap::getDefaultAttackDamage();
}
