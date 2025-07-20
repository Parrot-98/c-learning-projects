#include <iostream>

int main(int argc, char const *argv[])
{
    std::string student[] = {"Bob", "Bob1","Bob2","Bob3","Bob4","Bob5","Bob6"};
 

    for(int i = 0; i < sizeof(student)/sizeof(std::string); i++){
        std::cout << student[i] << '\n';
    }


    return 0;
}
