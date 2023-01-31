#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(): type("default")
{
    std::cout<<"[Default] WrongAnimal constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance): type(instance.type)
{
    std::cout<<'['<<type<<"] "<<"Copy WrongAnimal constructor called"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy WrongAnimal assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
		return (*this);
	}
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<'['<<type<<"] "<<"WrongAnimal Destructor called"<<std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << getType() << " Wrong animal..." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout<<'['<<type<<"] "<<"WrongAnimal Constructor Called "<<std::endl;
}