#include <iostream>
using namespace std;
int main()
{
    int N,x=1;
    cin>>N;
    string S;
    cin>>S;
    for(int i=0;i<N-1;i++)
    {
        if(S[i]!=S[i+1])
        {
            x=x+1;
        }
    }
    cout<<x;
    return 0;
}