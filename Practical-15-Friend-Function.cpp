// Practical 15 sample: Unary operator overloading using a friend function
#include <iostream>
using namespace std;
class Counter { int value; public: Counter() : value(20) {} friend void operator++(Counter &); void showValue() { cout << "Counter = " << value; } };
void operator++(Counter &counter) { ++counter.value; }
int main() { Counter counter; ++counter; counter.showValue(); return 0; }