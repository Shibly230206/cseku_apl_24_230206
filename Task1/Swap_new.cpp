#include <iostream>
using namespace std;

int main() {
    // Declare two variables to store user input
    int a, b;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swap the values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0; // Indicate successful program termination
}
