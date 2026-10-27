// Practical No. 20
// Aim: Write a C++ program to implement a vector class with functions to
// create the vector, modify an element, multiply by a scalar, and display it.

#include <iostream>
using namespace std;

class Vector {
    int values[10];
    int size;

public:
    void create() {
        cout << "Enter number of elements (maximum 10): ";
        cin >> size;

        if (size < 1 || size > 10) {
            cout << "Invalid size." << endl;
            size = 0;
            return;
        }

        cout << "Enter vector elements: ";
        for (int i = 0; i < size; i++) {
            cin >> values[i];
        }
    }

    void modify(int position, int value) {
        if (position >= 0 && position < size) {
            values[position] = value;
        } else {
            cout << "Invalid element position." << endl;
        }
    }

    void multiplyByScalar(int scalar) {
        for (int i = 0; i < size; i++) {
            values[i] *= scalar;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << values[i];
            if (i < size - 1) cout << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector v;
    int position, value, scalar;

    v.create();

    cout << "Vector: ";
    v.display();

    cout << "Enter element position to modify (0-based): ";
    cin >> position;
    cout << "Enter new value: ";
    cin >> value;
    v.modify(position, value);

    cout << "Enter scalar value: ";
    cin >> scalar;
    v.multiplyByScalar(scalar);

    cout << "Modified vector: ";
    v.display();

    return 0;
}

/*
Example:
Enter number of elements (maximum 10): 3
Enter vector elements: 1 2 3
Vector: 1 2 3
Enter element position to modify (0-based): 1
Enter new value: 10
Enter scalar value: 2
Modified vector: 2 20 6

To display a vector such as 10 20 30, enter those values and use scalar 1.
*/
