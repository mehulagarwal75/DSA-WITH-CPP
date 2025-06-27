#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 6;

    // Perform operations
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Display results in sentence format
    cout << "Addition of " << a << " and " << b << " is " << addition << endl;
    cout << "Subtraction of " << a << " and " << b << " is " << subtraction << endl;
    cout << "Multiplication of " << a << " and " << b << " is " << multiplication << endl;
    cout << "Division of " << a << " and " << b << " is " << division << endl;
    cout << "Modulo of " << a << " and " << b << " is " << modulo << endl;

    // Display results in expression format
    cout << a << " + " << b << " = " << addition << endl;
    cout << a << " - " << b << " = " << subtraction << endl;
    cout << a << " * " << b << " = " << multiplication << endl;
    cout << a << " / " << b << " = " << division << endl;
    cout << a << " % " << b << " = " << modulo << endl;

}
