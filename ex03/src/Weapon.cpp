#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
    this->type = type;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}