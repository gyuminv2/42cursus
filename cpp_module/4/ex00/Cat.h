#ifndef CAT_H
# define CAT_H

# include "Animal.h"

class Cat: public Animal
{
    public:
        Cat();
		Cat(const Cat &instance);
		Cat& operator=(const Cat &instance);
		~Cat();
    public:
        void    makeSound() const;
    public:
        Cat(std::string name);
};

#endif