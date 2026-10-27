// Practical 11: Virtual base class
#include <iostream>
using namespace std;
class Person { protected: int rollNo; public: void getRoll() { cout << "Enter Roll Number: "; cin >> rollNo; } };
class Test : virtual public Person {};
class Sports : virtual public Person {};
class FinalResult : public Test, public Sports { public: void display() { cout << "Roll Number = " << rollNo; } };
int main() { FinalResult resultObj; resultObj.getRoll(); resultObj.display(); return 0; }