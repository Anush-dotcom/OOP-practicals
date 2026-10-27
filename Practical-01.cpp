// Practical 1: Evaluate an expression using input/output functions and operators
#include <iostream>
using namespace std;
int main() {
    int firstNum, secondNum, divisor, answer;
    cout << "Enter three numbers: ";
    cin >> firstNum >> secondNum >> divisor;
    if (divisor == 0) { cout << "Division by zero is not allowed."; return 1; }
    answer = (firstNum + secondNum) / divisor;
    cout << "Result = " << answer;
    return 0;
}