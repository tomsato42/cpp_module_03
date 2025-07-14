#include "ScavTrap.h"

int main()
{
    ScavTrap scavTrap("HOGE");
    scavTrap.attack("target1");
    scavTrap.takeDamage(42);
    scavTrap.beRepaired(42);
    scavTrap.guardGate();
    return 0;
}