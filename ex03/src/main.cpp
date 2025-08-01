#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    std::cout << "- HumanA -" << std::endl;
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon sword = Weapon("Master Sword");
    HumanB jim("Jim");
    std::cout << "- HumanB -" << std::endl;
    jim.setWeapon(sword);
    jim.attack();
    club.setType("some other type of sword");
    jim.attack();
}
