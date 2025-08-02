#include <iostream>
#include <string>

int main(void)
{
    std::string variable = "Hello, World!";
    std::string *stringPtr = &variable;
    std::string &stringRef = variable;

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "-> Memory adress of variable: " << &variable << std::endl;
    std::cout << "-> Memory adress of stringPtr: " << stringPtr << std::endl;
    std::cout << "-> Memory adress of stringRef: " << &stringRef << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "-> Value of variable: " << variable << std::endl;
    std::cout << "-> Value of stringPtr: " << *stringPtr << std::endl;
    std::cout << "-> Value of stringRef: " << stringRef << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}