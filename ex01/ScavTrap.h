#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();
    void guardGate() const;
};

#endif // SCAVT RAP_H