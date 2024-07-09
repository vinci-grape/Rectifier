#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<n+k if k%n ==0 else k-n;
    return 0;
}