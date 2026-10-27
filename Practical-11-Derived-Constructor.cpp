// Practical 11 sample: Constructor in a derived class
#include <iostream>
using namespace std;
class Candidate { protected: int rollNo; public: Candidate(int r) : rollNo(r) {} };
class Report : public Candidate { int score; public: Report(int initialRoll, int m) : Candidate(initialRoll), score(m) {} void display() { cout << "Roll Number = " << rollNo << endl << "Marks = " << score; } };
int main() { Report reportObj(101, 88); reportObj.display(); return 0; }