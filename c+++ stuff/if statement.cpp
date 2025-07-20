#include <iostream>

int main(int argc, char const *argv[])
{
    int age;

    std::cout << "WHts is your age? ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome in!";
    }
    else if(age < 0){
        std::cout << "Not born yet!";
    }
    else{
       std::cout << "GET OUT!";
    }
    return 0;
}
