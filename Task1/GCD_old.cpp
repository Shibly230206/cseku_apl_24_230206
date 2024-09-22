#include <iostream>
using namespace std;

int main() {
    int n1, n2, i, gcd_num;

    cout << "ENTER TWO NUMBERS: ";
    cin >> n1 >> n2;

    for(i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd_num = i;
        }
    }

cout << "GCD of two numbers " << n1 << " and " << n2 << " is " << gcd_num << std::endl;

    return 0;
}
