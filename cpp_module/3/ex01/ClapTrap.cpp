#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout<<"Default ClapTrap constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &instance): name(instance.name), hit_points(instance.hit_points), energy_points(instance.energy_points), attack_damage(instance.attack_damage)
{
    std::cout<<'['<<name<<"] "<<"Copy ClapTrap constructor called"<<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &instance)
{
    std::cout<<'['<<name<<"] "<<"Copy ClapTrap assignment operator called"<<std::endl;
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

ClapTrap::~ClapTrap(void)
{
    std::cout<<'['<<name<<"] "<<"ClapTrap Destructor called"<<std::endl;
}

void    ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this-hit_points == DIE)
    {
        std::cout << name << " is already died!" << std::endl;
        return ;
    }
    this->hit_points -= amount;
    if (this->hit_points <= DIE)
        this->hit_points = DIE;
    std::cout << "ClapTrap " << name << " has taken " << amount << " points of damage! " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
    this->hit_points += amount;
    this->energy_points--;
    std::cout << "ClapTrap " << name << " be repaired " << amount << " points of amount! " << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout<<'['<<name<<"] "<<"ClapTrap Constructor Called "<<std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage): name(name), hit_points(hit_points), energy_points(energy_points), attack_damage(attack_damage)
{
    std::cout<<"["<<name<<"] "<<"ClapTrap Constructor Called"<<std::endl;
}

unsigned int    ClapTrap::damageAmount()
{
    std::cout<<"attack_damage is "<<attack_damage<<"!"<<std::endl;
    return (this->attack_damage);
}

void	ClapTrap::showInfo()
{
    std::cout<<std::endl;
    std::cout<<"##################"<<std::endl;
    std::cout<<"name:          " <<name<<std::endl;
    std::cout<<"hit_points:    " <<hit_points<<std::endl;
    std::cout<<"energy_points: " <<energy_points<<std::endl;
    std::cout<<"attack_damage: " <<attack_damage<<std::endl;
    std::cout<<"##################"<<std::endl;
    std::cout<<std::endl;
}