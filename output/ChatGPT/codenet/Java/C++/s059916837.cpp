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
    int min = INT_MAX;
    for(int i = 0; i<=S.length()-T.length(); i++){
        min = min(min, find(S.substr(i, T.length()), T));
    }
    if(min!=INT_MAX){
        cout << min << endl;
    }else{
        cout << T.length() << endl;
    }


    return 0;
}