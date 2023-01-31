#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(), name("default")
{
	std::cout<<"["<<name<<"] "<<"DiamondTrap Constructor Called"<<std::endl;
    ClapTrap::name.append("_clap_name");
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &instance)
{
    std::cout<<'['<<name<<"] "<<"Copy DiamondTrap constructor called"<<std::endl;
    *this = instance;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &instance)
{
    std::cout<<'['<<name<<"] "<<"Copy DiamondTrap assignment operator called"<<std::endl;
    if (this == &instance)
        return *this;
    else
    {
        ClapTrap::name = instance.ClapTrap::name;
        this->name = instance.name;
        this->hit_points = instance.hit_points;
        this->energy_points = instance.energy_points;
        this->attack_damage = instance.attack_damage;
        return *this;
    }
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<'['<<name<<"] "<<"DiamondTrap Destructor Called "<<std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is <" << this->name << ">, Clap_name is<" << ClapTrap::name <<">!"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout<<"["<<name<<"] "<<"DiamondTrap Constructor Called"<<std::endl;
    ClapTrap::name.append("_clap_name");
    this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}