// Practical 10: Single inheritance example shown in the supplied document
#include <iostream>
using namespace std;
class Candidate { protected: int rollNo; public: void accept() { cout << "Enter Roll Number: "; cin >> rollNo; } };
class MarkSheet : public Candidate {
    int score;
public:
    void inputMarks() { cout << "Enter Marks: "; cin >> score; }
    void display() { cout << "\nRoll Number : " << rollNo << "\nMarks : " << score; }
};
int main() { MarkSheet sheet; sheet.accept(); sheet.inputMarks(); sheet.display(); return 0; }