#ifndef FRAPTRAP_HPP
# define FRAPTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
		FragTrap(const FragTrap &instance);
		FragTrap& operator=(const FragTrap &instance);
		~FragTrap();
	public:
        void    highFivesGuys(void);
	public:
		FragTrap(std::string name);
};

#endif