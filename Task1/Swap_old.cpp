#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "ENTER TWO NUMBER=";
    cin>>a ;
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
     cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}