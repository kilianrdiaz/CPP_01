#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();

        void attack() const;
        void setWeapon(Weapon &weapon);
        const std::string &getName() const;
};

#endif