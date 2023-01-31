#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout<<"'DEBUG' I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void    Harl::info(void)
{
    std::cout<<"'INFO' I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void    Harl::warning(void)
{
    std::cout<<"'WARNING' I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void    Harl::error(void)
{
    std::cout<<"'ERROR' This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void    Harl::_default(void)
{
    std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
}

// 멤버 함수에 대한 포인터 사용
void    Harl::complain(std::string level)
{
    std::string messege[5] = {DEBUG, INFO, WARNING, ERROR, DEFAULT};
    void    (Harl::*f_p[5])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::_default};

    int i = 0;
    for (; i < 5; i++)
    {
        if (messege[i] == level)
            break;
    }
    switch (i)
    {
        case _DEBUG:
            (this->*f_p[_DEBUG])();
        case _INFO:
            (this->*f_p[_INFO])();
        case _WARNING:
            (this->*f_p[_WARNING])();
        case _ERROR:
            (this->*f_p[_ERROR])();
            break;
        default:
            (this->*f_p[_DEFAULT])();
            break;
    }
}