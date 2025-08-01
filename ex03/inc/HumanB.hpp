#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(const std::string &name);
        ~HumanB();

        void attack() const;
        void setWeapon(Weapon &weapon);
        const std::string &getName() const; 
};

#endif