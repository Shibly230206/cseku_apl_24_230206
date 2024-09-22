#include <iostream>
#include <algorithm> // for std::sort

using namespace std;

int main()
{
    // Initialize the array with values
    int arr[] = {1, 3, 6, 9, 12, 16, 19, 0, 10, 11, 14};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    sort(arr, arr + size);

    // Print odd numbers from the sorted array
    cout << "Odd numbers in the sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i];
            if (i < size - 1)
            {
                cout << ", "; // Add a comma between numbers
            }
        }
    }

    cout << endl; // Print a newline at the end

    return 0;
}
