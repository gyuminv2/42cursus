#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main(void)
{
    // const Animal* abstract_class = new Animal();
    // abstract_class->makeSound();
    // delete abstract_class;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout<<std::endl;

    delete j;//should not create a leak
    delete i;
    
    const Animal *arr[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
        std::cout<<std::endl;
        std::cout<<"["<<i<<"]"<<std::endl;
        delete arr[i];
        std::cout<<std::endl;
	}
    // copy copy
    // Dog dog("dog");
    // Dog ddd(dog);
    // std::cout << dog.getBrain() << std::endl;
    // std::cout << ddd.getBrain() << std::endl;

    return 0;
}