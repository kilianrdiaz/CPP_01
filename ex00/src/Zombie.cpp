#include "Zombie.hpp"

Zombie::Zombie() : name("Default")
{
    std::cout << "A Zombie emerges from the ground." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "A Zombie named " << name << " emerges from the ground." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}