#include <iostream>


void Hello(std::string name);


int main(int argc, char const *argv[])
{
    std::string name= "bob";
    Hello(name);
    return 0;
}

void Hello(std::string name){
    std::cout << "Hello! " << name;
}