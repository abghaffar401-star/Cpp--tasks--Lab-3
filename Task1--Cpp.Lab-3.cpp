#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout and cin without std::

int main() {

    int num1, num2;  // Variables to store two numbers

    // Asking user to enter first number
    cout << "Enter first number: ";
    cin >> num1;   // Taking input

    // Asking user to enter second number
    cout << "Enter second number: ";
    cin >> num2;   // Taking input

    // Comparing numbers using relational operators

    if (num1 == num2) {  
        // Checks if numbers are equal
        cout << "Numbers are equal." << endl;
    }
    else if (num1 > num2) {  
        // Checks if first number is greater
        cout << "First number is greater than second." << endl;
    }
    else {  
        // If none of the above conditions are true
        cout << "First number is less than second." << endl;
    }

    return 0; // Program ends successfully
}