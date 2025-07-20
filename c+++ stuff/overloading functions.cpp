#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);

int main(int argc, char const *argv[])
{
    
    bakePizza("Mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "here is your " << topping1 << " pizza!\n";
}



