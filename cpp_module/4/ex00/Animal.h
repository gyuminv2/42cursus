#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
		Animal(const Animal &instance);
		Animal& operator=(const Animal &instance);
		virtual ~Animal();
    public:
        virtual void    makeSound() const;
        std::string    getType() const;
    public:
        Animal(std::string type);
};

#endif