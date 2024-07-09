#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0;i<s.length();i++){
        char c = s.at(i);
        if(c>='A'&&c<='Z'){
            c += 32;
            cout << c;
        }else if(c>='a'&&c<='z'){
            c -= 32;
            cout << c;
        }else{
            cout << c;
        }
    }
    cout << endl;
    return 0;
}