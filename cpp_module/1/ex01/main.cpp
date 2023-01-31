#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int n;
    std::string name;

    horde = zombieHorde(n = 3, name = "zombie_horde");

    for (int i = 0; i < n; i++)
        horde[i].announce();

    delete []horde;

    return (0);
}