#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        void    zombieName(std::string name);
        ~Zombie(void);
        void    announce(void);
};

Zombie  *zombieHorde(int N, std::string name);

#endif