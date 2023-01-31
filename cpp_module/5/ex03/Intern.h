#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.h"

class Form;

class Intern
{
    private:
        Form *forms[3];
    public:
        Intern(void);
        Intern(const Intern &instance);
        Intern &operator=(const Intern &instance);
        ~Intern(void);
    public:
        Form *makeForm(std::string formName, std::string fromTarget);
        class UnknownForm: public std::exception
        {
            public:
                const char *what(void) const throw();
        };
};

#endif