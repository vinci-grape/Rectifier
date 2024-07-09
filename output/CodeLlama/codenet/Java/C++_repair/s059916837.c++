#include <iostream>
#include <string>
using namespace std;

int find(string a, string b){
    int calc = 0;
    for(int x = 0; x<a.length(); x++){
        if(a[x] != b[x]){
            calc++;
        }
    }
    return calc;
}

int main() {
    string S, T;
    cin >> S >> T;
    int minVal = 2^32-1;
    for(int i = 0; i<=S.length()-T.length(); i++){
        minVal = min(minVal, find(S.substr(i, T.length()), T));
    }
    if(minVal!=2^32-1){
        cout << minVal << endl;
    }else{
        cout << T.length() << endl;
    }
    return 0;
}