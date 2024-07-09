#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    int arr[3];
    arr[0] = A+B;
    arr[1] = A-B;
    arr[2] = A*B;
    int max = arr[0];
    for(int i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}