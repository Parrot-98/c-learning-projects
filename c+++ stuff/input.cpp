#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;
    int age;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std:: ws, name); //make is so it accepts  multiple words with spaces

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "hello " << name << '\n';
    std::cout << "Your age is " << age << " years old.";
 
    return 0;
}
