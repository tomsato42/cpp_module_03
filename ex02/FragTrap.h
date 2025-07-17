#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(std::string const &name);
    ~FragTrap();

    void
    highFivesGuys(void);
    static unsigned int
    getDefaultHitPoints();
    static unsigned int getDefaultEnergyPoints();
    static unsigned int getDefaultAttackDamage();
private:
};

#endif // FRAGTRAP_H
