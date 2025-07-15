#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>

class ClapTrap
{
public:
    ClapTrap(const std::string &name);
    ClapTrap(const std::string &name, const unsigned int hitPoints, const unsigned int energyPoints,
             const unsigned int _attackDamage);
    ~ClapTrap();

    ClapTrap(const ClapTrap &);
    ClapTrap &
    operator=(const ClapTrap &);

    void
    attack(const std::string &target);
    void
    takeDamage(unsigned int amount);
    void
    beRepaired(unsigned int amount);

    std::string
    getName() const;
    unsigned int
    getHitPoints();
    unsigned int
    getEnergyPoints();
    unsigned int
    getAttackDamage() const;

    void
    setHitPoints(unsigned int hitPoints);
    void
    setEnergyPoints(unsigned int energyPoints);

private:
    const std::string name_;
    unsigned int hitPoints_;
    unsigned int energyPoints_;
    const unsigned int attackDamage_;
};

#endif // CLAPTRAP_H
