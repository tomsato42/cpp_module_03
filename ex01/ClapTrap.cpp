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
    energyPoints_--;
    std::cout << "\033[1m" << name_ << "\033[0m "
              << "\033[33mattacks\033[0m " << target << ", causing "
              << "\033[1m" << attackDamage_ << "\033[0m points of damage!" << std::endl;
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
    hitPoints_ += amount;
    energyPoints_--;
    std::cout << "\033[1m" << name_ << "\033[0m "
              << "\033[32mrepairs itself\033[0m for " << "\033[1m" << amount << "\033[0m points! Remaining hit points: "
              << "\033[1m" << hitPoints_ << "\033[0m" << std::endl;
}

std::string
ClapTrap::getName() const
{
    return name_;
}
