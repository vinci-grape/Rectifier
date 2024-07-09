#include <iostream>
using namespace std;
int main(void){
    int i,t,n;
    for(i=0; i<4; i++){
        cin >> t >> n;
        if(t==1){
            cout << 6000*n << endl;
        }
        else if(t==2){
            cout << 4000*n << endl;
        }
        else if(t==3){
            cout << 3000*n << endl;
        }
        else if(t==4){
            cout << 2000*n << endl;
        }
    }
}