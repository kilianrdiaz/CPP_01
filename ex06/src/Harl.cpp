#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug()
{
    std::cout << std::endl << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
        << std::endl;
}

void Harl::_info()
{
    std::cout << std::endl << "[ INFO ]"<< std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!"
        << std::endl;
}

void Harl::_warning()
{
    std::cout << std::endl << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month."
        << std::endl;
}

void Harl::_error()
{
    std::cout << std::endl << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable!\nI want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level )
{
    const std::string   levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void                (Harl::*f[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch(i)
    {
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        case 0:
            (this->*f[0])();
        case 1:
            (this->*f[1])();
        case 2:
            (this->*f[2])();
        case 3:
            (this->*f[3])();
    }
}