#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();
    void guardGate();
    void
    attack(const std::string& target);
    static unsigned int
    getDefaultHitPoints();
    static unsigned int
    getDefaultEnergyPoints();
    static unsigned int
    getDefaultAttackDamage();
};

#endif // SCAVTRAP_H
