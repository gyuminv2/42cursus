#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        return (true);
    }
    else
    {
        Harl *h;

        h = NULL;
        h->complain(av[1]);
    }
}