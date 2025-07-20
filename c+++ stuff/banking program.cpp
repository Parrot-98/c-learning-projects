#include <iostream>


float bankblance = 100000;
char choice;





int main(int argc, char const *argv[])
{
    std::cout << "********************Welcome to our Ajju's Bank ********************";
    std::cout << "Your banking balance: " << bankblance;
    std::cout << "Would u like to withdraw(1) or deposit?(2): ";
    std::cin >> choice;

    if(choice == 1){
        std::cout << "How much would u like to with draw?: ";
        std::cin;
    }

    return 0;
}
