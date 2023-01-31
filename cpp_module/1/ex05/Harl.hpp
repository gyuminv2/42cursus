#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void    complain(std::string level);
};

#endif