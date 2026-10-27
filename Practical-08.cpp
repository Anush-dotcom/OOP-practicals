// Practical 8: Array of objects
#include <iostream>
using namespace std;
class Pupil {
    int rollNo; char pupilName[30];
public:
    void accept() { cout << "Enter Roll Number: "; cin >> rollNo; cout << "Enter Name: "; cin >> pupilName; }
    void display() { cout << "\nRoll Number : " << rollNo << "\nName : " << pupilName << endl; }
};
int main() { Pupil pupils[3]; cout << "Enter Pupil Details\n"; for (int i=0; i<3; i++) pupils[i].accept(); cout << "\nStudent Records\n"; for (int i=0; i<3; i++) pupils[i].display(); return 0; }