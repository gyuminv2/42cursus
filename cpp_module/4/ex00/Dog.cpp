#include "Dog.h"

Dog::Dog(): Animal("Dog")
{
    std::cout<<'['<<type<<"] "<<"Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog &instance): Animal(instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Dog constructor called"<<std::endl;
}

Dog& Dog::operator=(const Dog &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Dog assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
		return (*this);
	}
}

Dog::~Dog()
{
    std::cout<<'['<<type<<"] "<<"Dog Destructor called"<<std::endl;
}

void    Dog::makeSound() const
{
    std::cout << getType() << " bark!" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout<<'['<<type<<"] "<<"Dog Constructor Called "<<std::endl;
}