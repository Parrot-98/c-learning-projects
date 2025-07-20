#include <iostream>
#include <algorithm> // for std::fill

int main(int argc, char const *argv[])
{
    const int size = 99;
    std::string foods[size];

    std::fill(foods, foods + (size / 3), "Pizza");
    std::fill(foods + (size / 3), foods + (size / 3) * 2, "Hamburger");
    std::fill(foods + (size / 3) * 2, foods + size, "Hotdogs");

    for (std::string food : foods) {
        std::cout << food << '\n';
    }

    return 0;
}