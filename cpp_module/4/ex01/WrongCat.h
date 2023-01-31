#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
		WrongCat(const WrongCat &dup);
		WrongCat& operator=(const WrongCat &target);
		~WrongCat();
    public:
        void    makeSound() const;
    public:
        WrongCat(std::string name);
};

#endif