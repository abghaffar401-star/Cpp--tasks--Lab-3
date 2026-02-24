#include <iostream>
using namespace std;

int main() {

    int num;  // Variable to store integer

    // Taking input from user
    cout << "Enter an integer: ";
    cin >> num;

    // If statement checks condition
    if (num > 0) {
        // Executes only if number is positive
        cout << "The number is positive." << endl;
    }

    // No else required because only one condition is checked

    return 0;
}