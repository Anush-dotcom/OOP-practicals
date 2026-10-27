// Practical No. 18 (Question 2)
// Aim: Write a C++ program to find the sum of array elements using a function template.

#include <iostream>
using namespace std;

template <class T>
T arraySum(T arr[], int size) {
    T sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements = "
         << arraySum(arr, size) << endl;

    return 0;
}

/*
Output:
Sum of array elements = 150
*/
