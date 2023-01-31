#include "Zombie.hpp"

void    Zombie::zombieName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "[" << name << "]" << " Destructor Called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}