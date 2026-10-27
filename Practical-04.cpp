// Practical 4: Member functions defined outside the class
#include <iostream>
using namespace std;
class Staff {
    int staffId; char staffName[30]; float monthlyPay;
public: void accept(); void display();
};
void Staff::accept() { cout << "Enter Staff ID : "; cin >> staffId; cout << "Enter Staff Name : "; cin >> staffName; cout << "Enter Salary : "; cin >> monthlyPay; }
void Staff::display() { cout << "\nEmployee Details\nStaff ID : " << staffId << "\nStaff Name : " << staffName << "\nSalary : " << monthlyPay << endl; }
int main() { Staff staff; staff.accept(); staff.display(); return 0; }