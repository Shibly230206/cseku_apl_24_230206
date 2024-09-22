#include <array>
#include <iostream>
using namespace std;

int main() {
    array<int, 4> myarray1{1, 2, 3, 4};
    array<int, 4> myarray2{3, 5, 7, 9};
    myarray1.swap(myarray2);

    cout << "myarray1 = ";
    for (auto it = myarray1.begin(); it < myarray1.end(); ++it)
        cout << *it << " ";
    cout << endl << "myarray2 = ";
    for (auto it = myarray2.begin(); it < myarray2.end(); ++it)
        cout << *it << " ";

    return 0;
}
// Output:
// myarray1 = 3 5 7 9
// myarray2 = 1 2 3 4
