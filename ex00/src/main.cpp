#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1;
    Zombie zombie2("Zom Bie");
    Zombie *zombie3 = newZombie("Zom Bie 2");

    zombie1.announce();
    zombie2.announce();
    zombie3->announce();

    randomChump("Chump");
    delete zombie3;
}