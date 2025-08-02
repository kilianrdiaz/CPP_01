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
    if (name.compare("Default") == 0)
        std::cout << "A nameless Zombie dies once again." << std::endl;
    else
    std::cout << "Zombie " << this->name << " dies once again." << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->name = name;
}
