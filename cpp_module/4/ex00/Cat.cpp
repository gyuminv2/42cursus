#include "Cat.h"

Cat::Cat(): Animal("Cat")
{
    std::cout<<'['<<type<<"] "<<"Cat constructor called"<<std::endl;
}

Cat::Cat(const Cat &instance): Animal(instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Cat constructor called"<<std::endl;
}

Cat& Cat::operator=(const Cat &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Cat assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
		return (*this);
	}
}

Cat::~Cat()
{
    std::cout<<'['<<type<<"] "<<"Cat Destructor called"<<std::endl;
}

void    Cat::makeSound() const
{
    std::cout << getType() << " meow~" << std::endl;
}

Cat::Cat(std::string name): Animal(name)
{
    std::cout<<'['<<type<<"] "<<"Cat Constructor Called "<<std::endl;
}