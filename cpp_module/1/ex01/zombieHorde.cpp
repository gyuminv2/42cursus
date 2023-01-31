#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        std::cerr<<"Error: N must be +"<<std::endl;
        return (NULL);
    }
    
    Zombie *objs = new Zombie[N];
    for (int i = 0; i < N; i++)
        objs[i].zombieName(name);
    return (objs);
}