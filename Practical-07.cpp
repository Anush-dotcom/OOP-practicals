// Practical 7: Static data member and static member function
#include <iostream>
using namespace std;
class ObjectCounter { static int total; public: ObjectCounter() { total++; } static void showTotal() { cout << "Total Objects Created = " << total; } };
int ObjectCounter::total = 0;
int main() { ObjectCounter firstObj, secondObj, thirdObj; ObjectCounter::showTotal(); return 0; }