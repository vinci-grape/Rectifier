#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n/10)%111==0 || (n%1000)%111==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}