#include <iostream>
#include <string>
using namespace std;

bool isEvenString(string s){
    string a = s.substr(0, s.length()/2);
    string b = s.substr(s.length()/2);
    if(a == b){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string S;
    getline(cin, S);

    if(S.length() % 2 == 1){
        S = S.substr(0, S.length() - 1);
    }
    else{
        S = S.substr(0, S.length() - 2);
    }

    for(; S.length() > 0; S = S.substr(0, S.length() - 2)){
        if(isEvenString(S)){
            break;
        }
    }
    cout << S.length() << endl;

    return 0;
}