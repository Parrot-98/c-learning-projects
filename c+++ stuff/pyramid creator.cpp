#include <iostream>

int main(int argc, char const *argv[])
{
    int rows;
    std::string symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "which symbol: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}