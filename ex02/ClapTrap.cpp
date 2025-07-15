#include "ClapTrap.h"

#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
    std::cout << "\033[1mClapTrap\033[0m: \033[1m" << name_ << "\033[0m " << "\033[32mconstructed!\033[0m" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name, const unsigned int hitPoints, const unsigned int energyPoints,
                   const unsigned int _attackDamage)
    : name_(name), hitPoints_(hitPoints), energyPoints_(energyPoints), attackDamage_(_attackDamage)
{
    std::cout << "\033[1mClapTrap\033[0m: \033[1m" << name_ << "\033[0m " << "\033[32mconstructed!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[1mClapTrap\033[0m: \033[1m" << name_ << "\033[0m " << "\033[31mdestroyed!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name_(other.name_),
      hitPoints_(other.hitPoints_),
      energyPoints_(other.energyPoints_),
      attackDamage_(other.attackDamage_)
{
}

ClapTrap &
ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
    }
    return *this;
}
void
ClapTrap::attack(const std::string &target)
{
    if (energyPoints_ <= 0)
    {
        std::cout << "\033[1m" << getName() << "\033[0m "
                  << "\033[31mhas no energy points left to attack!\033[0m" << std::endl;
        return;
    }
    energyPoints_--;
    std::cout << "\033[1m" << name_ << "\033[0m "
              << "\033[33mattacks\033[0m " << target << ", causing "
              << "\033[1m" << attackDamage_ << "\033[0m points of damage!" << " and remaining energy points: "
              << "\033[1m" << energyPoints_ << "\033[0m" << std::endl;
}
void
ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints_ -= amount;
    std::cout << "\033[1m" << name_ << "\033[0m "
              << "\033[31mtakes\033[0m " << "\033[1m" << amount << "\033[0m points of damage! Remaining hit points: "
              << "\033[1m" << hitPoints_ << "\033[0m" << std::endl;
}
void
ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints_ <= 0)
    {
        std::cout << "\033[1m" << getName() << "\033[0m " << "\033[31mhas no energy points left to repair!\033[0m"
                  << std::endl;
        return;
    }
    hitPoints_ += amount;
    energyPoints_--;
    std::cout << "\033[1m" << name_ << "\033[0m "
              << "\033[32mrepairs itself\033[0m for " << "\033[1m" << amount << "\033[0m points! Remaining hit points: "
              << "\033[1m" << hitPoints_ << "\033[0m" << " and remaining energy points: " << "\033[1m" << energyPoints_
              << "\033[0m" << std::endl;
}

std::string
ClapTrap::getName() const
{
    return name_;
}
unsigned int
ClapTrap::getHitPoints()
{
    return hitPoints_;
}
unsigned int
ClapTrap::getEnergyPoints()
{
    return energyPoints_;
}
unsigned int
ClapTrap::getAttackDamage() const
{
    return attackDamage_;
}
void
ClapTrap::setHitPoints(unsigned int hitPoints)
{
    hitPoints_ = hitPoints;
}
void
ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    energyPoints_ = energyPoints;
}
