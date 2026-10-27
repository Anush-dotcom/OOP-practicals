// Practical No. 18 (Question 1)
// Aim: Write a C++ program to copy the content of one file into another file
// using file functions.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");
    char ch;

    if (!source) {
        cout << "Error: Cannot open source.txt" << endl;
        return 1;
    }

    if (!destination) {
        cout << "Error: Cannot open destination.txt" << endl;
        return 1;
    }

    while (source.get(ch)) {
        destination.put(ch);
    }

    cout << "File content copied successfully." << endl;

    source.close();
    destination.close();
    return 0;
}

/*
Before running, create source.txt and write some text in it.
The program copies its contents to destination.txt.
*/
