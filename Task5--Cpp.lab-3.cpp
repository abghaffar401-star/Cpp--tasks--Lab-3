#include <iostream>
using namespace std;

int main() {

    int num;  // Variable to store integer

    // Taking input
    cout << "Enter an integer: ";
    cin >> num;

    // Checking multiple conditions using else-if ladder

    if (num > 0) {
        // Executes if number is greater than 0
        cout << "Number is positive." << endl;
    }
    else if (num < 0) {
        // Executes if number is less than 0
        cout << "Number is negative." << endl;
    }
    else {
        // Executes if number is exactly 0
        cout << "Number is zero." << endl;
    }

    return 0;
}