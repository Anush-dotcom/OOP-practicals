// Practical 12: Pointer to object and this pointer
#include <iostream>
using namespace std;
class Learner {
    int rollNo;
public:
    Learner(int rollNo) { this->rollNo = rollNo; }
    void accept() { cout << "Enter Roll Number: "; cin >> rollNo; }
    void display() { cout << "Roll Number = " << rollNo; }
};
int main() { Learner learner(110); Learner *learnerPtr = &learner; learnerPtr->display(); return 0; }