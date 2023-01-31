#include "Dog.h"

Dog::Dog(): Animal("Dog")
{
    this->brain = new Brain();
    this->brain->setIdeas("뼈다귀 주세여");
    std::cout<<'['<<type<<"] "<<"Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog &instance): Animal(instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Dog constructor called"<<std::endl;
    *this = instance;
}

Dog& Dog::operator=(const Dog &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Dog assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
        this->brain = new Brain(*(instance.brain));
		return (*this);
	}
}

Dog::~Dog()
{
    delete this->brain;
    std::cout<<'['<<type<<"] "<<"Dog Destructor called"<<std::endl;
}

void    Dog::makeSound() const
{
    std::cout << getType() << " 왈왈" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
    this->brain = new Brain();
    std::cout<<'['<<type<<"] "<<"Dog Constructor Called "<<std::endl;
}

Brain* Dog::getBrain()
{
    return (this->brain);
}