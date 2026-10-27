// Practical No. 17
// Aim: Write a C++ program to demonstrate virtual function and pure virtual function.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "Virtual function in base class" << endl;
    }

    virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void display() override {
        cout << "Rectangle class display function" << endl;
    }

    void area() override {
        cout << "Area of rectangle = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    Shape *ptr = &r;

    ptr->display(); // Calls the derived class virtual function
    ptr->area();    // Calls the derived class implementation of pure virtual function

    return 0;
}

/*
Output:
Rectangle class display function
Area of rectangle = 50

Result: Virtual and pure virtual functions are demonstrated.
*/