// Practical 16 sample: Binary operator overloading using a friend function
#include <iostream>
using namespace std;
class IntegerValue { int value; public: IntegerValue() : value(0) {} IntegerValue(int initialValue) : value(initialValue) {} friend IntegerValue operator+(IntegerValue, IntegerValue); void display() { cout << "Sum = " << value; } };
IntegerValue operator+(IntegerValue leftValue, IntegerValue rightValue) { IntegerValue answerValue; answerValue.value = leftValue.value + rightValue.value; return answerValue; }
int main() { IntegerValue firstValue(15), secondValue(25), sumValue; sumValue = firstValue + secondValue; sumValue.display(); return 0; }