#include "PresidentialPardonForm.h"

void PresidentPardonForm::presidnentPardon() const
{
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentPardonForm::PresidentPardonForm() : Form("presidential pardon", 25, 5)
{
}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &instance): Form("presidential pardon", instance.getRequiredGrade(), instance.getExecuteGrade())
{}

PresidentPardonForm &PresidentPardonForm::operator=(const PresidentPardonForm &instance)
{
	(void) instance;
	return (*this);
}

PresidentPardonForm::~PresidentPardonForm()
{}

// Zafod Beeblebrox가 <target>을 사면했다고 알려줍니다.
void PresidentPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << "[ PresidentPardonForm : execute]" << std::endl;
	// 서명 안되어 있음
	if (getSign() == false)
		throw IsnotSigned();
	// 실행 권한 부족
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
	presidnentPardon();
}

PresidentPardonForm::PresidentPardonForm(std::string target) : Form(target, 25, 5)
{}