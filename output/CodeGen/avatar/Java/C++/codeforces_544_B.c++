#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    int n,count;
    scanf("%d%d",&n,&count);
    int a=n/2+1,b=n/2;
    int max=a*a+b*b;
    if(count>max)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++){
                if((i+j)%2==0&&count>0){
                    s+='L';
                    count--;
                }
                else{
                    s+='S';
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}