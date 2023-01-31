#include "Animal.h"

Animal::Animal(): type("Animal")
{
    std::cout<<"Animal Animal constructor called"<<std::endl;
}

Animal::Animal(const Animal &instance): type(instance.type)
{
    std::cout<<'['<<type<<"] "<<"Copy Animal constructor called"<<std::endl;
}

Animal& Animal::operator=(const Animal &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Animal assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
		return (*this);
	}
}

Animal::~Animal()
{
   std::cout<<'['<<type<<"] "<<"Animal Destructor called"<<std::endl;
}

void    Animal::makeSound() const
{
    std::cout << getType() << " 동물" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::Animal(std::string type): type(type)
{
    std::cout<<'['<<type<<"] "<<"Animal Constructor Called "<<std::endl;
}