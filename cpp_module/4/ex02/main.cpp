#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
    
	// const Animal* abstract_class = new Animal();
    // abstract_class->makeSound();
    // delete abstract_class;

	return 0;
}