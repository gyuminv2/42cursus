#include "Intern.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

Intern::Intern()
{}

Intern::Intern(const Intern &instance)
{
	forms[0] = instance.forms[0];
	forms[1] = instance.forms[1];
	forms[2] = instance.forms[2];
}

Intern &Intern::operator=(const Intern &instance)
{
	(void) instance;
	return (*this);
}

Intern::~Intern()
{}

Form *Intern::makeForm(const std::string formname, const std::string formTarget)
{
	std::string come_formname[3] = {"shrubbery creation", "robotomy request" , "presidential pardon"};
	forms[0] = new ShrubberyCreationForm(formTarget);
	forms[1] = new RobotomyRequestForm(formTarget);
	forms[2] = new PresidentPardonForm(formTarget);

	
	for(int i=0; i<3; i++)
	{
		if (formname == come_formname[i])
		{
			switch (i)
			{
			case 0:
				std::cout << "Intern creates "<< formname << std::endl;
				delete forms[1]; delete forms[2];
				return forms[0];
			case 1:
				std::cout << "Intern creates "<< formname << std::endl;
				delete forms[0]; delete forms[2];
				return forms[1];
			case 2:
				std::cout << "Intern creates "<< formname << std::endl;
				delete forms[0]; delete forms[1];
				return forms[2];
			}
		}
	}
	// for (int i = 0; i < 3; i++)
	// 	delete forms[i];
	throw UnknownForm();
}

const char* Intern::UnknownForm::what() const throw()
{
	return ("It's an unknown format name.");
}
