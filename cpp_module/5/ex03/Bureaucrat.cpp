#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): name("root"), grade(1)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &instance): name(instance.name), grade(instance.grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &instance)
{
    (void) instance;
    return *this;
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
    if (this->grade < 1)
        throw GradeTooHighException();
    if (this->grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
	    form.beSigned(*this);
		std::cout<<this->getName()<<" signed "<<form.getName()<<std::endl;
	}
    catch (std::exception &e)
    {
		std::cout<<this->getName()<<" couldn't sign "<<form.getName()<<" because "<<e.what()<<std::endl;
	}
}

void Bureaucrat::IncreaseGrade()
{
    if (grade > 1)
        grade --;
    if (grade == 1)
        throw GradeTooHighException();
}

void Bureaucrat::DecreaseGrade()
{
    if (grade < 150)
        grade ++;
    if (grade == 150)
        throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &t)
{
    os << t.getName() << ", bureaucrat grade " << t.getGrade();
	return (os);
}