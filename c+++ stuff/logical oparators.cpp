#include <iostream>

int main(int argc, char const *argv[])
{
    //&& = check if 2 or more conditions are true(and)
    //|| = check if at least 1 of 2 conditions is true(or)
    //! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "What is the temprature?: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "Not to cold nor not to hot!" << '\n';
    }
    else if(temp < -100 || temp > 100){
        std::cout << "You will DIE!";
    }
    if(!sunny){ //your do this sunny == true
        std::cout << "Its not sunny!";
    }
    else{
        std::cout << "Its sunny!";
    }

    return 0;
}
