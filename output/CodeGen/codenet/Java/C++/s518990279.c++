#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
 
int main() {
 
    string inputed;
    int ans;
 
    while(true) {
 
        cin >> inputed;
        if(inputed.length() == 1 && inputed.equals("0"))break;
 
        ans = 0;
        for(int i = 0; i < inputed.length(); i++) {
            ans += inputed[i] - '0';
        }
 
        cout << ans << endl;
    }
 
    return 0;
}