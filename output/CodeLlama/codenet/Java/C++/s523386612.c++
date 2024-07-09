#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    int count[t+1];
    for(i=0;i<t+1;i++)
    {
        count[i]=0;
    }
    for(i=0;i<t;i++)
    {
        cin>>j;
        count[j]++;
    }
    for(i=0;i<t+1;i++)
    {
        cout<<count[i]<<endl;
    }
    return 0;
}