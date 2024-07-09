#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int n,i,j,p=97;
    string c;
    cin>>n;
    char c1[n];
    for(i=0;i<4;i++){
        for(j=i;j<n;j+=4){
            c1[j]=p;
            p++;
        }
    }
    for(i=0;i<n;i++){
        cout<<c1[i];
    }
    return 0;
}