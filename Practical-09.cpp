// Practical 9: Constructors and destructor
#include <iostream>
using namespace std;
class Learner {
    int rollNo;
public:
    Learner() : rollNo(101) { cout << "Default Constructor" << endl; }
    Learner(int r) : rollNo(r) { cout << "Parameterized Constructor" << endl; }
    Learner(const Learner &other) : rollNo(other.rollNo) { cout << "Copy Constructor" << endl; }
    void display() { cout << "Roll Number = " << rollNo << endl; }
    ~Learner() { cout << "Destructor Called" << endl; }
};
int main() { Learner firstLearner; Learner secondLearner(105); Learner copiedLearner(secondLearner); firstLearner.display(); secondLearner.display(); copiedLearner.display(); return 0; }