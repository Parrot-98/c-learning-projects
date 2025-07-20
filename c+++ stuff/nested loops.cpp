#include <iostream>

int main(int argc, char const *argv[])
{
    int rows;
    int columns;
    char symbol;
    std::cout << "How many rows?: ";
    std::cin >> rows;
    
    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "What symbol?: ";
    std::cin >> symbol;

    for(int i = 1;i <= rows;i++){
        std::cout << '\n';
        for(int j = 1;j <= columns;j++){
            std::cout << symbol;
        }
    }
    return 0;
}
