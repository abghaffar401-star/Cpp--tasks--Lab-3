#include <iostream>
u
sing namespace std;

int main() {

    int num;  // Variable to store integer

    // Asking user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Logical operator (&&) checks both conditions
    if (num > 0 && num < 100) {

        // Executes only if BOTH conditions are true
        cout << "Number is greater than 0 and less than 100." << endl;
    }
    else {

        // Executes if one or both conditions fail
        cout << "Number does NOT satisfy both conditions." << endl;
    }

    return 0;
}