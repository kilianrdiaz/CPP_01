#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

int main( void )
{
    int nZombies = 5;;
    std::string name = "Rick";

    Zombie* horde = zombieHorde(nZombies, name);
    
    delete[] horde;

    return 0;
}