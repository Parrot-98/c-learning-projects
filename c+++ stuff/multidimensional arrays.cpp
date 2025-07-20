#include <iostream> // Include the input-output stream library for std::cout

int main(int argc, char const *argv[]) // Main function; entry point of the program
{
    // 2D array of strings (3 rows, 3 columns) storing car models
    std::string cars[][3] = {
        {"Mustang", "Escape", "F-150"},         // First row (Ford cars)
        {"Corvette", "Equinox", "Silverado"},   // Second row (Chevrolet cars)
        {"Challenger", "Durango", "Ram 1500"}   // Third row (Dodge/RAM cars)
    };

    // Calculate the number of rows in the array
    int rows = sizeof(cars) / sizeof(cars[0]);
    // sizeof(cars) gives total size in bytes
    // sizeof(cars[0]) gives size of one row
    // Dividing gives how many rows there are

    // Calculate the number of columns in one row
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    // sizeof(cars[0]) is size of one row
    // sizeof(cars[0][0]) is size of one string
    // Dividing gives number of columns

    // Loop through all rows
    for(int i = 0; i < rows; i++){
        // Loop through all columns in the current row
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] ; // Print the car at position [i][j]
        }
        std::cout << '\n';
    }

    return 0; // End the program successfully
}