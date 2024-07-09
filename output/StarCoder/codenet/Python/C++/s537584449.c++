#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int sum = 0;
    while(a!=0)
    {
        sum = sum + a%10;
        a = a/10;
    }
    if(sum == 1)
        cout<<"10";
    else
        cout<<sum;
    return 0;
}