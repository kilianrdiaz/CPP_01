#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void announce() const;
        void setName(const std::string &name);
        
        std::string getName() const;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
