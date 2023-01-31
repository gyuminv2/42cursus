#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat: public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
		Cat(const Cat &instance);
		Cat& operator=(const Cat &instance);
		~Cat();
    public:
        void    makeSound() const;
    public:
        Cat(std::string name);
        Brain* getBrain();
};

#endif