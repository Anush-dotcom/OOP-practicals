// Practical 16: Binary operator overloading using a member function
#include <iostream>
using namespace std;
class IntegerValue {
    int value;
public:
    IntegerValue() : value(0) {}
    IntegerValue(int initialValue) : value(initialValue) {}
    IntegerValue operator+(IntegerValue rightValue) { IntegerValue answerValue; answerValue.value = value + rightValue.value; return answerValue; }
    void display() { cout << "Sum = " << value; }
};
int main() { IntegerValue firstValue(20), secondValue(30), sumValue; sumValue = firstValue + secondValue; sumValue.display(); return 0; }