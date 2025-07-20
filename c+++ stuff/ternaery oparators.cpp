#include <iostream>

//ternary oparato is replacement to if ans else
// condition ? expression 1 : expresstion 2

int main(int argc, char const *argv[])
{
    int grade =75;

    grade >= 60 ? std::cout << "You Passed!" : std::cout << "You Fail!";
    return 0;
}
