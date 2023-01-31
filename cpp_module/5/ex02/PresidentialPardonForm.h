#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.h"
#include "Bureaucrat.h"

// 25, 5
class PresidentPardonForm: public Form
{
	private:
		void presidnentPardon() const;
	public:
		PresidentPardonForm();
		PresidentPardonForm(const PresidentPardonForm &instance);
		PresidentPardonForm &operator=(const PresidentPardonForm &instance);
		~PresidentPardonForm();
	public:
		// <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
		void execute(Bureaucrat const &executor) const;
		PresidentPardonForm(std::string target);
};

#endif