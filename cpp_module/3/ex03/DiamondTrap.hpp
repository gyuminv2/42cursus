#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string name;
	public:
        DiamondTrap();
		DiamondTrap(const DiamondTrap &instance);
		DiamondTrap& operator=(const DiamondTrap &instance);
		~DiamondTrap();
	public:
        void    whoAmI(void);
	public:
		DiamondTrap(std::string name);
};

#endif
