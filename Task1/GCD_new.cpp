#include <iostream>
using namespace std;

int main() {
    // Declare variables to store two numbers and GCD
    int num1, num2, gcd;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the GCD using the iterative approach
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        // Check if 'i' is a divisor of both numbers
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // Update gcd to the largest common divisor found so far
        }
    }

    // Output the GCD result
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0; // Indicate successful program termination
}
