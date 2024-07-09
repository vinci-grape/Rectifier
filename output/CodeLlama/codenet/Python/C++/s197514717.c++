#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    cout<<max(10*A+B+C,10*B+C+A)<<" "<<max(10*C+A+B,10*A+B+C)<<endl;
    return 0;
}