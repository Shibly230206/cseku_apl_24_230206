#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,6,9,12,16,19,0,10,11,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    std::sort(arr,arr+n);
    for(int i=0;i<n;i++)
    
    {
        if(arr[i]%2 !=0){
            cout<<arr[i]<<",";
        }
    }
    return 0;
}