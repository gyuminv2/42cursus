#include "Harl.hpp"

int main()
{
    Harl *h;

    h = NULL;
    h->complain(DEBUG);
    h->complain(INFO);
    h->complain(WARNING);
    h->complain(ERROR);
}