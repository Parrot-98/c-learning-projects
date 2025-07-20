#include <iostream>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1: std::cout << "You have won a horse! :)"; 
            break;
    case 2: std::cout << "Failed u lost everything!:(";
            break;
    case 3: std::cout << "Rain";
            break;
    case 4: std::cout << " A merchant has come by!";
            break;
    case 5: std::cout << "YOU DIED!";
            break;
    
    
    default:
        break;
    }

    return 0;
}
