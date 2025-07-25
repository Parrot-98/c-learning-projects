#include <iostream>


double getTotal(double prices[], int size);

int main(int argc, char const *argv[])
{
    double prices[] = {25.06,50.75,4.26,98.56};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0;i < size; i++){
        total += prices[i];
    }

    return total;
}
