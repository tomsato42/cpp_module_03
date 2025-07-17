#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap(const std::string &name);
    ~DiamondTrap();

    void
    whoAmI();
    void
    showStatus();

    static unsigned int
    getDefaultHitPoints();
    static unsigned int
    getDefaultEnergyPoints();
    static unsigned int
    getDefaultAttackDamage();

private:
    const std::string name_;
};

#endif // DIAMONDTRAP_H
