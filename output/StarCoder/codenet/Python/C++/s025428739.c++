#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[3];
    arr[0]=a+b;
    arr[1]=a-b;
    arr[2]=a*b;
    cout<<max(arr);
}