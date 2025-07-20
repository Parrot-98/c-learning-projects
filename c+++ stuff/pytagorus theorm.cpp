#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    
    double a;
    double b;
    double c;

    std::cout << "Enter lenght a: ";
    std::cin >> a;
    std::cout << "Enter lenght b: ";
    std::cin >> b;

    c = pow(a , 2) + pow(b , 2);
    c = sqrt(c);
    std::cout << "The lenght of the hypotanuse is: " << c;
    

    return 0;
}
