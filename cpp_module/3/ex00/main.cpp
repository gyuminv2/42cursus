#include "ClapTrap.hpp"

int main()
{
    ClapTrap	a("a");
	ClapTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	a.showInfo();

	b.takeDamage(a.damageAmount());
	b.showInfo();

	b.attack("a");
	b.showInfo();

	a.takeDamage(b.damageAmount());
	a.showInfo();

	a.beRepaired(25);
	a.showInfo();
	std::cout << std::endl;
	return (0);
}