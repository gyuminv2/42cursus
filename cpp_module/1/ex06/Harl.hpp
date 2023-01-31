#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstring>

#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"
#define DEFAULT "DEFAULT"

enum
{
    _DEBUG,
    _INFO,
    _WARNING,
    _ERROR,
    _DEFAULT
};

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void _default(void);
    public:
        void    complain(std::string level);
};

#endif