#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = rand() % 10 + 1;

    do{
        std::cout << "Guess a number between 1-100: ";
        std::cin >> guess;
        tries++;
        if(guess == num){
            std::cout << "YOU WON!(# of tries: )" << tries;
        }
        
    }while (guess != num);
    
    
    return 0;
}
