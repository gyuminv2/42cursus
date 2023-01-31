#include "WrongCat.h"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout<<"Default WrongCat constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &instance): WrongAnimal(instance)
{
    std::cout<<'['<<type<<"] "<<"Copy WrongCat constructor called"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy WrongCat assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
		return (*this);
	}
}

WrongCat::~WrongCat()
{
    std::cout<<'['<<type<<"] "<<"WrongCat Destructor called"<<std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << getType() << " 야옹" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    std::cout<<'['<<type<<"] "<<"WrongCat Constructor Called "<<std::endl;
}