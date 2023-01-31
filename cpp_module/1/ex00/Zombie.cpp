#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{}

Zombie::~Zombie(void)
{
    std::cout << "[" << name << "]" << " Destructor Called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string    Zombie::getName(void)
{
    return this->name;
}