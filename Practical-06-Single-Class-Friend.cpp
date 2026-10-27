// Practical 6 sample: Friend function using one class
#include <iostream>
using namespace std;
class IntegerBox { int value; public: IntegerBox() : value(50) {} friend void showValue(IntegerBox); };
void showValue(IntegerBox item) { cout << "IntegerBox = " << item.value; }
int main() { IntegerBox box; showValue(box); return 0; }