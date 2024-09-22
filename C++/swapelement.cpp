#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);

std::swap(arr[0],arr[2]);

for(int i=0;i<n;i++)
{
    std::cout<<"arr[i]";
}
return 0;
}