#include "Brain.h"

Brain::Brain()
{
    std::cout<<"Brain constructor called"<<std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = "default ideas";
}

Brain::Brain(const Brain &instance)
{
    std::cout<<"Copy Brain constructor called"<<std::endl;
    *this = instance;
}

Brain& Brain::operator=(const Brain &instance)
{
    std::cout<<"Copy Brain assignment operator called"<<std::endl;
     if (this == &instance)
		return (*this);
	else
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = instance.ideas[i];
		return (*this);
	}
}

Brain::~Brain()
{
    std::cout<<"Brain Destructor called"<<std::endl;
}

std::string*	Brain::getIdeas(void)
{
	return (this->ideas);
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
	    this->ideas[i] = idea;
}