// Practical 13: Pointer to derived class in single inheritance
#include <iostream>
using namespace std;
class Candidate { protected: int rollNo; public: void accept() { cout << "Enter Roll Number: "; cin >> rollNo; } };
class Report : public Candidate { int score; public: void getMarks() { cout << "Enter Marks: "; cin >> score; } void display() { cout << "\nRoll Number = " << rollNo << "\nMarks = " << score; } };
int main() { Report report; Report *reportPtr = &report; reportPtr->accept(); reportPtr->getMarks(); reportPtr->display(); return 0; }