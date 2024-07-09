#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int max = -1e9;
    int min = 1e9;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(max<x)
            max = x;
        if(min>x)
            min = x;
    }
    cout<<min<<" "<<max<<" "<<sum;
    return 0;
}