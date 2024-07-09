#include <iostream>
using namespace std;
int main() {
    int n, minN;
    cin >> n;
    cin >> minN;
    for(int i=0;i<n-1;i++){
        int h;
        cin >> h;
        if( minN == h){
            minN = h;
        }else if(minN == h-1){
            minN = h-1;
        }else if(minN < h-1){
            minN = h-1;
        }else if(minN > h){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}