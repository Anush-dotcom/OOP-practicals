// Practical No. 19 - Question 1
// Aim: Write a C++ program to demonstrate a class template.

#include <iostream>
using namespace std;

template <class T>
class Number {
    T value;

public:
    Number(T v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number<int> n1(25);
    Number<float> n2(12.5f);

    cout << "Integer object:" << endl;
    n1.display();

    cout << "Float object:" << endl;
    n2.display();

    return 0;
}

/*
Output:
Integer object:
Value = 25
Float object:
Value = 12.5

Result: Class template demonstrated successfully.
*/
