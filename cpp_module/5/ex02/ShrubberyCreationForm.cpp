#include "ShrubberyCreationForm.h"

void ShrubberyCreationForm::makeTree() const
{
	std::string filename = getName().append("_shrubbery");
	std::ofstream writeFile(filename);

	writeFile << 
                 
            "            &&& &&  & &&\n"
            "        && &\\/&\\|& ()|/ @, &&\n"
            "       &\\/(/&/&||/& /_/)_&/_&\n"
            "      &() &\\/&|()|/&\\/ '% & ()\n"
            "     &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
            "    &&   && & &| &| /& & % ()& /&&\n"
            "    ()&_---()&\\&\\|&&-&&--%---()~\n"
            "        &&    \\|||\n"
            "                |||\n"
            "                |||\n"
            "                |||\n"
            "       	, -=-~  .-^- _";

	writeFile.close();
	std::cout<<"Make a tree.."<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance): Form("ShrubberyCreationForm", instance.getRequiredGrade(), instance.getExecuteGrade())
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &instance)
{
	(void) instance;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	 std::cout << "[ ShrubberyCreationForm : execute ]" << std::endl;
	// 서명 안되어 있음
	if (getSign() == false)
		throw IsnotSigned();
	// 실행 권한 부족
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
	makeTree();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{}