#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    // heap
    return (new Zombie(name));

    // stack
    // Zombie *arr[1];
    // arr[0]->getName() = name;
    // return (*arr);
}