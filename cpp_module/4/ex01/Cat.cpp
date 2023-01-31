#include "Cat.h"

Cat::Cat(): Animal("Cat")
{
    this->brain = new Brain();
	this->brain->setIdeas("생선 주세여");
    std::cout<<'['<<type<<"] "<<"Cat constructor called"<<std::endl;
}

Cat::Cat(const Cat &instance): Animal(instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Cat constructor called"<<std::endl;
    *this = instance;
}

Cat& Cat::operator=(const Cat &instance)
{
    std::cout<<'['<<type<<"] "<<"Copy Cat assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->type = instance.type;
        this->brain = new Brain(*(instance.brain));
		return (*this);
	}
}

Cat::~Cat()
{
    delete this->brain;
    std::cout<<'['<<type<<"] "<<"Cat Destructor called"<<std::endl;
}

void    Cat::makeSound() const
{
    std::cout << getType() << " 야옹" << std::endl;
}

Cat::Cat(std::string name): Animal(name)
{
    this->brain = new Brain();
    std::cout<<'['<<type<<"] "<<"Cat Constructor Called "<<std::endl;
}

Brain* Cat::getBrain()
{
    return (this->brain);
}