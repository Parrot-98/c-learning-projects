#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    do{
        std::cout << "Enter a positve number!: ";
        std::cin >> num;
    }while( num < 0);
    std::cout << num;
    return 0;
}
