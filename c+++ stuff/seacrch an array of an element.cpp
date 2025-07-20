#include <iostream>

int seachArray(int array[], int size, int element);

int main(int argc, char const *argv[])
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter element to seach for: ";
    std::cin >> myNum;

    index = seachArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not found :)";
    }

    return 0;
}
int seachArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}