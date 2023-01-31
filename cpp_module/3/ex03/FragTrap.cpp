#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("default", 100, 100, 30)
{
    std::cout<<"[Default] FragTrap constructor called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &instance): ClapTrap(instance)
{
    std::cout<<'['<<name<<"] "<<"Copy FragTrap constructor called"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &instance)
{
    std::cout<<'['<<name<<"] "<<"Copy FragTrap assignment operator called"<<std::endl;
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

FragTrap::~FragTrap()
{
    std::cout<<'['<<name<<"] "<<"FragTrap Destructor called"<<std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->hit_points == DIE)
    {
        std::cout << name << " is already died!" << std::endl;
        return ;
    }
    std::cout << name << " highFivesGuys!"<<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
    std::cout<<'['<<name<<"] "<<"FragTrap Constructor Called "<<std::endl;
}