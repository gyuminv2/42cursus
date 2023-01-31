#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap *ptr1 = new DiamondTrap("test1");
	ptr1->whoAmI();
	ptr1->attack("object1");
	ptr1->showInfo();
	delete ptr1;
	std::cout<<std::endl;

	std::cout<<"/* ################################################## */"<<std::endl;

	ScavTrap *ptr2 = new DiamondTrap("test2");
	ptr2->attack("object2");
	ptr2->showInfo();
	delete ptr2;
	std::cout<<std::endl;

	std::cout<<"/* ################################################## */"<<std::endl;

	FragTrap *ptr3 = new DiamondTrap("test3");
	ptr3->attack("object3");
	ptr3->showInfo();
	delete ptr3;
	std::cout<<std::endl;

	std::cout<<"/* ################################################## */"<<std::endl;

	ClapTrap *ptr4 = new DiamondTrap("test4");
	ptr4->attack("object4");
	ptr4->showInfo();
	delete ptr4;

	return 0;
}