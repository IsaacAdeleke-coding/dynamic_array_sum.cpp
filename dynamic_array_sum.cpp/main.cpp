//
//  main.cpp
//  dynamic_array_sum.cpp
//
//  Created by Isaac Adeleke on 10/14/24.
//

#include <iostream>
using namespace std;

/*
 * Program: Dynamic Array Allocation and Summation
 * Description: This program dynamically allocates an array of integers based on user input,
 *              fills the array with user-provided values, calculates the sum of the values,
 *              and then deallocates the memory properly.
 */

int main() {
    // Step 1: Declare a pointer for the dynamic array and an integer for array size
    int* arr = nullptr;
    int size;

    // Step 2: Prompt the user to enter the size of the array
    cout << "Enter the number of elements you want to store: ";
    cin >> size;

    // Step 3: Dynamically allocate memory for the array
    arr = new int[size]; // Allocates an array of 'size' integers

    // Step 4: Input values from the user to fill the array
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Step 5: Calculate the sum of the array
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i]; // Accumulate the sum of elements
    }

    // Step 6: Output the sum of the array
    cout << "The sum of the array elements is: " << sum << endl;

    // Step 7: Deallocate the memory used by the array
    delete[] arr; // Frees up the dynamically allocated memory

    return 0; // Successful program termination
}
