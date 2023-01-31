#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include <iostream>
#include <random>
#include "Form.h"
#include "Bureaucrat.h"

class Bureaucrat;

// 72, 45
class RobotomyRequestForm: public Form
{
	private:
		void robotomyRequest() const;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &instance);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &instance);
		~RobotomyRequestForm();
	public:
		// <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
		void execute(Bureaucrat const &executor) const;
		RobotomyRequestForm(std::string target);
};

#endif