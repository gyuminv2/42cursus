#include "RobotomyRequestForm.h"

void RobotomyRequestForm::robotomyRequest() const
{
	srand(time(NULL));
	int random = rand() % 2;

	std::cout << "D...rrrr.....iii...lllll!" << std::endl;
	if (random == 0)
	{
		std::cout << Form::getName() << " has been robotomized." << std::endl;
	}
	else
	{
		std::cout << "Robotomy Failed" << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance):Form("robotomy request", instance.getRequiredGrade(), instance.getExecuteGrade())
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &instance)
{
	(void) instance;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

// 드릴 소리를 내며 <target>이 50%의 확률로 성공적으로 로봇화되었다고 알려주십시오. 그렇지 않으면 실패라고 알려주십시오.
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::cout << "[ RobotomyRequestForm : execute]" << std::endl;
	// 서명 안되어 있음
	if (getSign() == false)
		throw IsnotSigned();
	// 실행 권한 부족
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
	robotomyRequest();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{}