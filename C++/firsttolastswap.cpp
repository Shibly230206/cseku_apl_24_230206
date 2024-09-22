#include <iostream>
#include <algorithm> // Include this for std::swap

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::swap(arr[0], arr[n - 1]); // Swap the first and last elements

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
