// Practical 6: Friend function using two different classes
#include <iostream>
using namespace std;
class SecondValue;
class FirstValue { int first; public: FirstValue() : first(20) {} friend void addValues(FirstValue, SecondValue); };
class SecondValue { int second; public: SecondValue() : second(30) {} friend void addValues(FirstValue, SecondValue); };
void addValues(FirstValue leftObj, SecondValue rightObj) { cout << "Sum = " << leftObj.first + rightObj.second; }
int main() { FirstValue firstObj; SecondValue secondObj; addValues(firstObj, secondObj); return 0; }