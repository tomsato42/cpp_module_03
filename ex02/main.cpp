#include "FragTrap.h"

int main()
{
    FragTrap fragTrap("HOGE");
    fragTrap.attack("target1");
    fragTrap.takeDamage(42);
    fragTrap.beRepaired(42);
    fragTrap.highFivesGuys();
    return 0;
}
