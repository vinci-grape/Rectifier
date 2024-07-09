#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int s=A[0]^A[1];
    for(int i=2;i<N;i++)
    {
        s=s^A[i];
    }
    int B[N];
    for(int i=0;i<N;i++)
    {
        B[i]=s^A[i];
    }
    for(int i=0;i<N;i++)
    {
        cout<<B[i]<<" ";
    }
}