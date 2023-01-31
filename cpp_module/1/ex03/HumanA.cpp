#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): name(name), type(type)
{}

void    HumanA::attack()
{
    std::cout<<name<<" attacks with his "<<type.getType()<<std::endl;
}

HumanA::~HumanA() {}