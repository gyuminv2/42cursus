#include "FragTrap.hpp"

int main()
{
    ClapTrap	a("a");
	ClapTrap	b("b");

	FragTrap	c("c");
	FragTrap	d("d");

	std::cout << std::endl;
	a.attack("b");
	a.showInfo();
	b.takeDamage(a.damageAmount());
	b.showInfo();
	std::cout << std::endl;

	b.attack("a");
	b.showInfo();
	a.takeDamage(b.damageAmount());
	a.showInfo();
	std::cout << std::endl;

	b.showInfo();
	std::cout << std::endl;
    
	a.beRepaired(25);
	a.showInfo();
	std::cout << std::endl;

	std::cout<<"/* ################################################## */"<<std::endl;

	std::cout << std::endl;
	c.attack("d");
	c.showInfo();
	d.takeDamage(c.damageAmount());
	d.showInfo();
	std::cout << std::endl;

	d.attack("c");
	d.showInfo();
	c.takeDamage(d.damageAmount());
	c.showInfo();
	std::cout << std::endl;

	d.showInfo();
	std::cout << std::endl;
    
	c.beRepaired(25);
	c.showInfo();
	std::cout << std::endl;

	c.highFivesGuys();
	d.highFivesGuys();
	std::cout << std::endl;

	// // 객체를 힙에 할당
	// std::cout<<"/* ################################################## */"<<std::endl;
	// ClapTrap	*p = new ClapTrap;
	// FragTrap	*o = new FragTrap;
	// p->attack("FIRST");
	// delete p;
	// p = o;	// default =
	// p->attack("SECOND");
	// delete p;
	// std::cout << std::endl;
	
	// // 객체를 스택에 할당
	// std::cout<<"/* ################################################## */"<<std::endl;
	// ClapTrap	l;
	// FragTrap	v;
	// l.attack("FIRST");
	// l = v;	// not default =
	// l.attack("SECOND");
	// std::cout << std::endl;

	return (0);
}