#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default", 100, 50, 20)
{
    std::cout<<"[Default] ScavTrap constructor called"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &instance): ClapTrap(instance)
{
    std::cout<<'['<<name<<"] "<<"Copy ScavTrap constructor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &instance)
{
    std::cout<<'['<<name<<"] "<<"Copy ScavTrap assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->name = instance.name;
        this->hit_points = instance.hit_points;
        this->energy_points = instance.energy_points;
        this->attack_damage = instance.attack_damage;
		return (*this);
	}
}

ScavTrap::~ScavTrap()
{
    std::cout<<'['<<name<<"] "<<"ScavTrap Destructor called"<<std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->hit_points == DIE)
    {
        std::cout << name << " is already died!" << std::endl;
        return ;
    }
    if (this->energy_points == 0)
    {
        std::cout << name << " is No energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
}

void    ScavTrap::guardGate()
{
    if (this->hit_points == DIE)
    {
        std::cout << name << " is already died!" << std::endl;
        return ;
    }
    std::cout << name << " is now in Gate keeper mode."<<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout<<'['<<name<<"] "<<"ScavTrap Constructor Called "<<std::endl;
}