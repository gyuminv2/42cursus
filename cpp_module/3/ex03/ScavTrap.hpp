#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
		ScavTrap(const ScavTrap &instance);
		ScavTrap& operator=(const ScavTrap &instance);
		~ScavTrap();
    public:
        void    attack(const std::string& target);
        void    guardGate();
    public:
		ScavTrap(std::string name);
};

#endif