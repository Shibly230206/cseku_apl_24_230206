#include <array>
#include <iostream>

using namespace std;

int main() {
    // Initialize two arrays of size 4
    array<int, 4> myArray1{1, 2, 3, 4};
    array<int, 4> myArray2{3, 5, 7, 9};

    // Swap the contents of myArray1 and myArray2
    myArray1.swap(myArray2);

    // Output the contents of myArray1 after swapping
    cout << "myArray1 = ";
    for (auto it = myArray1.begin(); it != myArray1.end(); ++it) {
        cout << *it << " ";
    }

    // Output the contents of myArray2 after swapping
    cout << endl << "myArray2 = ";
    for (auto it = myArray2.begin(); it != myArray2.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl; // New line after output

    return 0; // Indicate successful program termination
}
