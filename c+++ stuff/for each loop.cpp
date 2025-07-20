#include <iostream>

int main(int argc, char const *argv[])
{
     std::string students[] = {"Bob", "Bob1","Bob2","Bob3","Bob4","Bob5","Bob6"};
 

    for(std::string student : students){
        std::cout << student << '\n';
    }
    return 0;
}
