#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << i + 1;
        zombies[i].setName(name + "-" + ss.str());
        zombies[i].announce();
    }
    return zombies;
}