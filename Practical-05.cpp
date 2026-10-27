// Practical 5: Inline function
#include <iostream>
using namespace std;
inline int findSquare(int value) { return value * value; }
int main() { int inputNumber; cout << "Enter a number: "; cin >> inputNumber; cout << "Square = " << findSquare(inputNumber); return 0; }