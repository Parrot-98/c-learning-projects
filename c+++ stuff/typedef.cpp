#include <iostream>
#include <vector>

//Allows to give a name to long/any data types
typedef std::vector<std::pair<std::string, int>> pair_t;
//typedef std::string s;
typedef int no;
using string_t = std::string; //used for templates

int main()
{
    
    pair_t hello;
    string_t name = "Hello";
    std::cout << name;
    no age = 10;
    std::cout << age;
    return 0;
}
