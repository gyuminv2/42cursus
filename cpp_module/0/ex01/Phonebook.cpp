#include "Phonebook.h"

Phonebook::Phonebook(void): idx(0)
{
    std::cout << "!!! START !!!" << std::endl;
}

void    Phonebook::add(void)
{
    if (idx == 8)
    {
        for (int i = 0; i < 7; i++)
            this->arr[i] = this->arr[i+1];
        idx--;
        this->arr[idx].save_contact();
        idx++;
    }
    else
    {
        this->arr[idx].save_contact();
        idx++;
    }
}

void    Phonebook::search(void)
{
    for (int i = 0; i < idx; i++)
        show(i);
    show_detail();
}

void    Phonebook::sort_(std::string str)
{
    std::string sub;

    if (str.length() > 10)
    {
        sub = str.substr(0, 9) + ".";
        std::cout<<sub<<"|";
    }
    else
        std::cout<<str<<"|";
}

void	Phonebook::_exit(void)
{
    std::cout << "Bye~~~~~~~" << std::endl;
    exit(EXIT);
}

void    Phonebook::show(int i)
{
        std::cout.width(10);
        std::cout << i << "|";
        std::cout.width(10);
        sort_(arr[i].get_First_name());
        std::cout.width(10);
        sort_(arr[i].get_Last_name());
        std::cout.width(10);
        sort_(arr[i].get_Nick_name());
        std::cout<<std::endl;
}

void	Phonebook::show_detail(void)
{
    int i;

    std::cout << "Chose the index" << std::endl;

    while (1)
    {
        std::cin.clear();
		clearerr(stdin);

        std::string idx;

        std::getline(std::cin, idx);
        if (idx < "0" || idx > "7")
        {
            std::cout << "Please number" << std::endl;
            continue;
        }
        i = atoi(idx.c_str());
        if ((i >= 0 && i <= 7) && !is_empty(i))
        {
            info(i);
            break;
        }
        else
        {
            if (is_empty(0))
            {
                std::cout << "Phonebook is empty!" << std::endl;
                break;
            }
            std::cout << "HINT: [0 ~ 7]" << std::endl;
        }
    }
}

bool	Phonebook::is_empty(int i)
{
    if (arr[i].check_buffer())
        return 1;
    return 0;
}

void    Phonebook::info(int i)
{
    std::cout << "first_name: " << arr[i].get_First_name() << std::endl;
    std::cout << "last_name: " << arr[i].get_Last_name() << std::endl;
    std::cout << "nick_name: " << arr[i].get_Nick_name() << std::endl;
    std::cout << "phone_number: " << arr[i].get_Phone_number() << std::endl;
    std::cout << "darkest_secret: "<< arr[i].get_Secret() << std::endl;
}
