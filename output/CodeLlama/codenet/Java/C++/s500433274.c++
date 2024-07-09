#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a,b,c;
    while(cin>>a>>b) {
        c = a>b?a:b;
        if(a==c&&b!=c) cout<<"GREATER"<<endl;
        else if(b==c&&a!=c) cout<<"LESS"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}