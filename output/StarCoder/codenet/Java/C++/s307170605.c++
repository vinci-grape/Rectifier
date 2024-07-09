#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 5; i++){
        if(n == 0){
            cout << i+1;
            break;
        }
        cin >> n;
    }
    return 0;
}