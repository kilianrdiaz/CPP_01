#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name) {}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

const std::string &HumanB::getName() const
{
    return this->name;
}