#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(a%4==0){
            count1++;
        }else if(a%2==0 && (a/2)%2==1){
            count2++;
        }
    }
    if(count1>=N/2){
        cout<<"Yes"<<endl;
    }else if(((N/2-count1)*2+N%2)==count2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}