// Practical 2: Scope resolution, dynamic memory and manipulators
#include <iostream>
#include <iomanip>
using namespace std;
int globalValue = 100;
int main() {
    int localValue = 50;
    cout << "Local x = " << localValue << endl;
    cout << "Global x = " << ::globalValue << endl;
    int *ptr = new int;
    *ptr = 25;
    cout << "Dynamic value = " << *ptr << endl;
    delete ptr;
    cout << setw(15) << "Hello";
    return 0;
}