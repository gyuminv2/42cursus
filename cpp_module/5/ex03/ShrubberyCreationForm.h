#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iostream>
# include "Form.h"
# include "Bureaucrat.h"

class Bureaucrat;

// 145, 137
class ShrubberyCreationForm : public Form
{
    private:
	    void makeTree() const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &instance);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &instance);
        ~ShrubberyCreationForm();
    public:
        // <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
        void execute(Bureaucrat const &executor) const;
        ShrubberyCreationForm(const std::string target);
};

#endif