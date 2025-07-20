#include <iostream>

void sort(int array[], int size);

int main(int argc, char const *argv[])
{
    int array[] = {8, 33, 70, 23, 46, 71, 98, 52, 28, 20, 45, 91, 40, 18, 72, 22, 37, 84, 60, 3, 35, 59, 38, 92, 29, 79, 85, 50, 66, 87, 30, 9, 5, 15, 7, 13, 6, 96, 61, 64, 26, 99, 1, 34, 93, 53, 48, 14, 27, 43, 77, 4, 21, 2, 58, 63, 83, 25, 68, 57, 41, 65, 81, 86, 32, 47, 16, 10, 36, 44, 75, 11, 78, 17, 90, 12, 97, 49, 62, 24, 31, 80, 67, 39, 88, 95, 55, 19, 74, 94, 73, 82, 42, 76, 89, 69, 100, 56, 51, 54
};
    int size = sizeof(array)/sizeof(array[2]);

    sort(array, size);


    for(int element : array){
        std::cout << element << " ";
    }


    return 0;
}
void sort(int array[], int size){
    
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}