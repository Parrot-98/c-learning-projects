#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name;
    return 0;
}
