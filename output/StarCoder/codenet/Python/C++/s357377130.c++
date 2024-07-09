#include<iostream>
using namespace std;
int main()
{
    int A,B,K;
    cin>>A>>B>>K;
    if(A+K-1>=B-K+1)
    {
        while(A<=B)
        {
            cout<<A<<endl;
            A++;
        }
    }
    else
    {
        int i=0;
        while(i<=K-1)
        {
            cout<<A+i<<endl;
            i++;
        }
        while(B-K+1<=B)
        {
            cout<<B-K+1<<endl;
            K--;
        }
    }
    return 0;
}