#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //if(name.length() >= 9){
    //    std::cout << "Long name!";
    //}
    //if(name.empty()){
    //    std::cout << "Type smt!";
    //}
    //name.clear();
    //name.append("@gmail.com");
    //std::cout << name.at(0);//displays 0 chrecter of the name
    //name.insert(0, "@");
    //std::cout << name.find(" ");
    name.erase(0, 3);
    std::cout << name;


    return 0;
}
