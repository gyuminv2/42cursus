#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.h"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int requiredGrade;
        const int executedGrade;
    public:
        Form();
		Form(const Form &instance);
		Form& operator=(const Form &instance);
		~Form();
    public:
        std::string getName() const;
	    bool getSign() const;
        void beSigned(Bureaucrat &target);
        Form(std::string name, int requiredGrade, int executedGrade);
	    int getRequiredGrade() const;
	    int getExecuteGrade() const;
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
	};
    class SignedException : public std::exception
    {
        public:
            const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, const Form &t);

#endif