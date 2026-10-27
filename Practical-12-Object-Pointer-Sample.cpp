// Practical 12 sample: Pointer to object
#include <iostream>
using namespace std;
class Learner { int rollNo; public: void accept() { cout << "Enter Roll Number: "; cin >> rollNo; } void display() { cout << "Roll Number = " << rollNo; } };
int main() { Learner learner; Learner *learnerPtr = &learner; learnerPtr->accept(); learnerPtr->display(); return 0; }