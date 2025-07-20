#include <iostream>

int main()
{
    const double pi = 3.14159;// makes it uneditable by anyone
    //pi = 14;//this is show an error
    double radius = 23;
    double circumfrence = 2*pi*radius;
    std::cout << circumfrence << "m";

    return 0;
}
