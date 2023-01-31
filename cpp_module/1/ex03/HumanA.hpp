#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &type;
    public:
        HumanA(std::string name, Weapon &type);
        void    attack();
        ~HumanA();
};

#endif