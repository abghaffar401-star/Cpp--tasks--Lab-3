#include <iostream>
using namespace std;
// use the standard namespace(so we can write 'cin' and 'cout' directly)
int main() {

    int age;  // Variable to store age

    // Asking user to enter age
    cout << "Enter your age: ";
    cin >> age;

    // Checking condition using if-else
    if (age >= 18) {

        // Executes if age is 18 or greater
        cout << "You are an adult." << endl;
    }
    else {

        // Executes if age is less than 18
        cout << "You are not an adult." << endl;
    }

    return 0;
}