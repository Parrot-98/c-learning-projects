#include <iostream>

double square(double lenght);

int main(int argc, char const *argv[])
{
    double lenght = 5.0;
    double area = square(lenght);
    std::cout << area;
    return 0;
}

double square(double lenght){
    return lenght * lenght;
}
