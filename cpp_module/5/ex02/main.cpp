#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(void)
{
	// Form *form = new Form;
	// std::cout<<form->getSign()<<std::endl;
	try
	{
		Bureaucrat human("gyumpark", 35);
		ShrubberyCreationForm myTree("Shrubbery");
		RobotomyRequestForm robotomy("Robotomy");
		PresidentPardonForm pardon("Presidential");

		std::cout << human << std::endl << std::endl;

		std::cout << myTree << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;

		human.signForm(myTree);
		human.signForm(robotomy);
		human.signForm(pardon);

		std::cout << std::endl;
		myTree.execute(human);
		std::cout << std::endl;
		robotomy.execute(human);
		std::cout << std::endl;
		pardon.execute(human);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}