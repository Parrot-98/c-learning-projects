#include <iostream>

int main(int argc, char const *argv[])
{
    double temp;
    char unit;

    std::cout << "What is the temprature outside?: ";
    std::cin >> temp;

    std::cout << "what unit do u wanna convert into(°C,°F)";
    std::cin >> unit;

    if(unit == 'C' || 'c'){
        temp = (temp - 32)*5/9;
        std::cout << temp;
    }
    else{
        temp = temp * 9/5 + 32;
        std::cout << temp;
    }
    return 0;
}
