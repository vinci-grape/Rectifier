#include <bits/stdc++.h>
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
int B[N];
for(int i=0;i<N;i++)
{
B[A[i]-1]=i+1;
}
for(int i=0;i<N;i++)
{
cout<<B[i]<<" ";
}
}