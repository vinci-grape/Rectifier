#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int ans;
    string inputed;
 
    while(true){
 
        cin >> inputed;
        if(inputed.length() == 1 && inputed[0] == '0')break;
 
        ans = 0;
        for(int i = 0; i < inputed.length(); i++){
            ans += inputed[i]-'0';
        }
 
        cout << ans << endl;
    }
 
    return 0;
}