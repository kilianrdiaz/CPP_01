#include "Zombie.hpp"

Zombie::Zombie() : name("Default")
{
    std::cout << "Zombie " << name << " is created." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " is created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->name = name;
}
