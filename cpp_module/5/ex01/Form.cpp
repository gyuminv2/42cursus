#include "Form.h"

Form::Form(): sign(0), requiredGrade(0), executedGrade(0)
{}

Form::Form(const Form &instance): name(instance.name), sign(instance.sign), requiredGrade(instance.requiredGrade), executedGrade(instance.executedGrade)
{}

Form& Form::operator=(const Form &instance)
{
    (void) instance;
    return *this;
}

Form::~Form()
{}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSign() const
{
    return this->sign;
}

void Form::beSigned(Bureaucrat &target)
{
    if (getSign() == 1)
        throw SignedException();
	else if (target.getGrade() <= requiredGrade)
		sign = 1;
    else
        throw GradeTooLowException();
}

Form::Form(std::string name, int requiredGrade, int executedGrade): name(name), sign(0), requiredGrade(requiredGrade), executedGrade(executedGrade)
{
    if (requiredGrade < 1 || executedGrade < 1)
		throw GradeTooHighException();
	else if (requiredGrade > 150 || executedGrade > 150)
	    throw GradeTooLowException();
}

int Form::getRequiredGrade() const
{
    return requiredGrade;
}

int Form::getExecuteGrade() const
{
    return executedGrade;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception");
}

const char* Form::SignedException::what() const throw()
{
    return ("It's signed");
}

std::ostream& operator<<(std::ostream &os, const Form &t)
{
    os << "Form's name : " << t.getName() << std::endl
    << "sign : " << t.getSign() << std::endl
    << "Required grade : " << t.getRequiredGrade() << std::endl
	<< "Executed grade : " << t.getExecuteGrade() << std::endl;
    return os;
}
