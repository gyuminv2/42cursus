#include <iostream>
#include "Form.h"
#include "Intern.h"

int main(void)
{
	try
	{
		// test1
		// Intern someRandomIntern;
		// Form *rrf;
		// Bureaucrat oner("oner", 1);

		// rrf = someRandomIntern.makeForm("robotomy request", "gyumpark");
		// oner.signForm(*rrf);
		// rrf->execute(oner);
		// std::cout << *rrf << std::endl;
		
		// Common section
		Intern i1;
		Intern i2;
		Intern i3;
		Form *test1;
		Form *test2;
		Form *test3;

		// test2
		// Bureaucrat gyumpark("gyumpark", 1);

		// test1 = i1.makeForm("shrubbery creation", "Test1");
		// gyumpark.signForm(*test1);
		// test1->execute(gyumpark);
		// std::cout << *test1 << std::endl << std::endl;

		// test2 = i2.makeForm("robotomy request", "Test2");
		// gyumpark.signForm(*test2);
		// test2->execute(gyumpark);
		// std::cout << *test2 << std::endl << std::endl;

		// test3 = i3.makeForm("presidential pardon", "Test3");
		// gyumpark.signForm(*test3);
		// test3->execute(gyumpark);
		// std::cout << *test3 << std::endl << std::endl;

		//test3
		Bureaucrat joonhyung("joonhyung", 6); // presidential pardon

		test1 = i1.makeForm("shrubbery creation", "Test1");
		joonhyung.signForm(*test1);
		test1->execute(joonhyung);
		std::cout << *test1 << std::endl << std::endl;

		test2 = i2.makeForm("robotomy request", "Test2");
		joonhyung.signForm(*test2);
		test2->execute(joonhyung);
		std::cout << *test2 << std::endl << std::endl;

		test3 = i3.makeForm("presidential pardon", "Test3");
		joonhyung.signForm(*test3);
		test3->execute(joonhyung);
		std::cout << *test3 << std::endl << std::endl;

		//test4
		// Bureaucrat seokhwan("seokhwan", 46); // robotomy request

		// test1 = i1.makeForm("shrubbery creation", "Test1");
		// seokhwan.signForm(*test1);
		// test1->execute(seokhwan);
		// std::cout << *test1 << std::endl << std::endl;

		// test2 = i2.makeForm("robotomy request", "Test2");
		// seokhwan.signForm(*test2);
		// test2->execute(seokhwan);
		// std::cout << *test2 << std::endl << std::endl;

		// test3 = i3.makeForm("presidential pardon", "Test3");
		// seokhwan.signForm(*test3);
		// test3->execute(seokhwan);
		// std::cout << *test3 << std::endl << std::endl;

		//test5
		// Bureaucrat joonhyuk("joonhyuk", 142); // shrubbery creation

		// test1 = i1.makeForm("shrubbery creation", "Test1");
		// joonhyuk.signForm(*test1);
		// test1->execute(joonhyuk);
		// std::cout << *test1 << std::endl << std::endl;

		// test2 = i2.makeForm("robotomy request", "Test2");
		// joonhyuk.signForm(*test2);
		// test2->execute(joonhyuk);
		// std::cout << *test2 << std::endl << std::endl;

		// test3 = i3.makeForm("presidential pardon", "Test3");
		// joonhyuk.signForm(*test3);
		// test3->execute(joonhyuk);
		// std::cout << *test3 << std::endl << std::endl;



		delete test1;
		delete test2;
		delete test3;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}