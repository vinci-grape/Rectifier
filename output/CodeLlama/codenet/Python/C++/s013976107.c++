#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    string S;
    cin>>S;
    if(S[A]=='-' && S.count('-')==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}