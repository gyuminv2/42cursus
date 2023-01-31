#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
		Bureaucrat(const Bureaucrat &instance);
		Bureaucrat& operator=(const Bureaucrat &instance);
		~Bureaucrat();
    public:
        std::string getName() const;
        int getGrade() const;
        Bureaucrat(std::string name, int grade);
        void IncreaseGrade();
        void DecreaseGrade();
    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
    {
        public:
            const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &t);

#endif