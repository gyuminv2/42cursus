#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string weapon;
    public:
        Weapon(std::string type);
        std::string getType(void) const;
        void    setType(std::string type);
        ~Weapon(void);
};

#endif