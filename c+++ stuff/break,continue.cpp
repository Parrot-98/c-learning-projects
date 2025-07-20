#include <iostream>

//break = stop the loop
//countinue = skip this part

int main(int argc, char const *argv[])
{
    for(int i = 1;i <= 20; i++){
        if(i == 17){
            break;
        }
        else if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}
