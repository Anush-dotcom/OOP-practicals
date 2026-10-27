// Practical 3: Implicit/explicit casting and a function defined inside a class
#include <iostream>
using namespace std;
class Pupil {
    int rollNo;
    char pupilName[30];
public:
    void accept() { cout << "Enter Roll Number : "; cin >> rollNo; cout << "Enter Name : "; cin >> pupilName; }
    void display() { cout << "\nStudent Details\nRoll Number : " << rollNo << "\nName : " << pupilName << endl; }
};
int main() {
    int integerValue = 25;
    float floatValue = integerValue;
    cout << "Implicit Type Casting\nInteger Value : " << integerValue << "\nFloat Value : " << floatValue << endl;
    float percentage = 89.75f;
    int wholeNumber = (int)percentage;
    cout << "\nExplicit Type Casting\nFloat Value : " << percentage << "\nInteger Value : " << wholeNumber << endl;
    Pupil pupil; pupil.accept(); pupil.display();
    return 0;
}