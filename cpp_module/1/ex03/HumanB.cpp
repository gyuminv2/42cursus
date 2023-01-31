#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{}

void    HumanB::attack()
{
    std::cout<<name<<" attacks with his "<<type->getType()<<std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
}

// void    HumanB::setWeapon(Weapon *type)
// {
//     this->type = type;
// }

HumanB::~HumanB() {}