// Practical 14: Function overloading
#include <iostream>
using namespace std;
class Calculator {
public:
    void sumValues(int a, int b) { cout << "Sum = " << a+b << endl; }
    void sumValues(float a, float b) { cout << "Sum = " << a+b << endl; }
    void sumValues(int a, int b, int c) { cout << "Sum = " << a+b+c << endl; }
};
int main() { Calculator obj; obj.sumValues(10,20); obj.sumValues(12.5f,8.5f); obj.sumValues(10,20,30); return 0; }