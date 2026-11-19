
/*
    ASSIGNMENT: COS 201 / CSC 207

    NAME: BAMIDELE TESTIMONY AYOKUNLE
    DEPARTMENT: SOFTWARE ENGINEERING
    MATRIC NUMBER: 261931152

    TOPIC: C++ PROGRAM TO CHECK IF A NUMBER
           IS ODD OR EVEN
*/

#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "==================================" << endl;
    cout << "NAME: BAMIDELE TESTIMONY AYOKUNLE" << endl;
    cout << "DEPARTMENT: SOFTWARE ENGINEERING" << endl;
    cout << "MATRIC NUMBER: 261931152" << endl;
    cout << "==================================" << endl;

    cout << "\nEnter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is an Even number." << endl;
    }
    else {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}
