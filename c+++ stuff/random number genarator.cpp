#include <iostream>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int num = (rand() % 6) + 1;// genarates a random number between 0 and 100 and + 1 of to get 100 also

    std::cout << num;
    return 0;
}
