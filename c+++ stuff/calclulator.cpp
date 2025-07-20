#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Hello! " << '\n';
    double num1;
    double num2;
    char op;
    double num3;

    std::cout << "Enter number 1! ";
    std::cin >> num1;

    std::cout << "Enter number 2! ";
    std::cin >> num2;

    std::cout << "Enter an oparator!(+,-,*,/): ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        num3 = num1 + num2;
        std::cout << "Answer is " << num3;
        break;
    case '-':
        num3 = num1 - num2;
        std::cout << "Answer is " << num3;
        break;
    case '*':
        num3 = num1 * num2;
        std::cout << "Answer is " << num3;
        break;
    case '/':
        num3 = num1 / num2;
        std::cout << "Answer is " << num3;
        break;
    
    default:
        std::cout << "worng oparator enter one of these(+-*/) :)";
        break;
    }

    return 0;
}
