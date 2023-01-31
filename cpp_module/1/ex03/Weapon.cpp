#include "Weapon.hpp"

Weapon::Weapon(std::string type): weapon(type)
{}

std::string Weapon::getType(void) const
{
    return (this->weapon);
}

void    Weapon::setType(std::string type)
{
    this->weapon = type;
}

Weapon::~Weapon(void) {}