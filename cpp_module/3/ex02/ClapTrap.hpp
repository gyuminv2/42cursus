#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define DIE 0

# include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &instance);
		ClapTrap& operator=(const ClapTrap &instance);
		virtual ~ClapTrap();
	public:
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
		unsigned int	damageAmount();
		void showInfo();
};

#endif
