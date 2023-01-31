#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout<<std::endl;

    std::cout << meta->getType() << " "<<std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout<<std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout<<std::endl;

    delete j;
    delete i;
    delete meta;

    std::cout<<std::endl;

    const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
    delete k;
    
    return 0;
}