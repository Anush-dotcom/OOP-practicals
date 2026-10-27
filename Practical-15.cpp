// Practical 15: Unary operator overloading using a member function
#include <iostream>
using namespace std;
class Counter { int value; public: Counter() : value(10) {} void operator++() { ++value; } void showValue() { cout << "Counter = " << value; } };
int main() { Counter counter; ++counter; counter.showValue(); return 0; }