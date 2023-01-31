#include "Zombie.hpp"

int main(void)
{
    std::string newZombie_1 = "foo_1";
    std::string newZombie_2 = "foo_2";
    
    randomChump(newZombie_1);
    randomChump(newZombie_2);

    // Zombie* newZombie_3 = new Zombie("foo_3");
    // Zombie* newZombie_4 = new Zombie("foo_4");

    // randomChump(newZombie_3->getName());
    // randomChump(newZombie_4->getName());

    return (0);
}