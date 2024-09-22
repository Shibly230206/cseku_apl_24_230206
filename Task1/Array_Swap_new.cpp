#include <iostream>
#include <utility> // for std::swap
using namespace std;

int main() {
    // Initialize arrays a and b
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    
    // Calculate the number of elements in array 'a'
    int n = sizeof(a) / sizeof(a[0]);

    // Swap the arrays 'a' and 'b' pointers
    swap(a, b);

    // Output the contents of array 'a'
    cout << "a[] = ";
    for (int i = 0; i < n; ++i) {
        cout << a[i];
        if (i < n - 1) {
            cout << ", "; // Adds a comma between elements
        }
    }

    // Output the contents of array 'b'
    cout << "\nb[] = ";
    for (int i = 0; i < n; ++i) {
        cout << b[i];
        if (i < n - 1) {
            cout << ", "; // Adds a comma between elements
        }
    }

    // End of program
    return 0;
}
