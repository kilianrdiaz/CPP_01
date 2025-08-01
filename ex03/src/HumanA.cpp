#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : weapon(weapon), name(name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

const std::string &HumanA::getName() const
{
    return this->name;
}