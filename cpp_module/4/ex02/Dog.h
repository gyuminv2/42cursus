#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog: public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
		Dog(const Dog &instance);
		Dog& operator=(const Dog &instance);
		~Dog();
    public:
        void makeSound() const;
    public:
        Dog(std::string name);
        Brain* getBrain();
};

#endif