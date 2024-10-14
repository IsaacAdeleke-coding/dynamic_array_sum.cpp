//
//  main.cpp
//  dynamic_array_sum.cpp
//
//  Created by Isaac Adeleke on 10/14/24.
//

#include <iostream>

int main() {
    int n;
    
    // Ask user for the number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Dynamically allocate an array of integers
    int* array = new int[n];

    // Fill the array with user input
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    // Calculate the sum of the array
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    // Print the sum
    std::cout << "The sum of the array is: " << sum << std::endl;

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}
