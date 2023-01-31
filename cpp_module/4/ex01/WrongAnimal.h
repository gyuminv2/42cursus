#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
		WrongAnimal(const WrongAnimal &dup);
		WrongAnimal& operator=(const WrongAnimal &target);
		~WrongAnimal();
    public:
        void    makeSound() const;
        std::string    getType() const;
    public:
        WrongAnimal(std::string name);
};

#endif