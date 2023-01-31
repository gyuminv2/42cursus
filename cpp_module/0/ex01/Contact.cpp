#include "Contact.h"

void Contact::save_contact(void)
{
    std::cout << "first_name: ";
    std::getline(std::cin, first_name);
    while (check_info(this->first_name))
    {
        std::cout << "DON'T ENTER" << std::endl;
        std::getline(std::cin, first_name);
        std::cin.clear();
		clearerr(stdin);
    }
    std::cout << "last_name: ";
    std::getline(std::cin, last_name);
    while (check_info(this->last_name))
    {
        std::cout << "DON'T ENTER" << std::endl;
        std::getline(std::cin, last_name);
        std::cin.clear();
		clearerr(stdin);
    }
    std::cout << "nick_name: ";
    std::getline(std::cin, nick_name);
    while (check_info(this->nick_name))
    {
        std::cout << "DON'T ENTER" << std::endl;
        std::getline(std::cin, nick_name);
        std::cin.clear();
		clearerr(stdin);
    }
    std::cout << "phone_number: ";
    std::getline(std::cin, phone_number);
    while (check_info(this->phone_number))
    {
        std::cout << "DON'T ENTER" << std::endl;
        std::getline(std::cin, phone_number);
        std::cin.clear();
		clearerr(stdin);
    }
    std::cout << "darkest_secret: ";
    std::getline(std::cin, darkest_secret);
    while (check_info(this->darkest_secret))
    {
        std::cout << "DON'T ENTER" << std::endl;
        std::getline(std::cin, darkest_secret);
        std::cin.clear();
		clearerr(stdin);
    }
}

std::string Contact::get_First_name(void)
{
    return this->first_name;
}

std::string Contact::get_Last_name(void)
{
    return this->last_name;
}

std::string Contact::get_Nick_name(void)
{
    return this->nick_name;
}

std::string Contact::get_Phone_number(void)
{
    return this->phone_number;
}

std::string Contact::get_Secret(void)
{
    return this->darkest_secret;
}

bool Contact::check_buffer(void)
{
    if (this->get_First_name().empty())
        return 1;
    else if (this->get_Last_name().empty())
        return 1;
    else if (this->get_Nick_name().empty())
        return 1;
    else if (this->get_Phone_number().empty())
        return 1;
    else if (this->get_Secret().empty())
        return 1;
    return 0;
}

bool Contact::check_info(std::string str)
{
    if (str.empty())
        return 1;
    return 0;
}