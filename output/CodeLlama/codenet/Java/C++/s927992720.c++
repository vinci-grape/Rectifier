#include <iostream>
using namespace std;

int main(){
    while(true){
        int a, b;
        char op;
        cin >> a >> op >> b;
        if(op == '?') break;
        if(op == '+') cout << a+b << endl;
        if(op == '-') cout << a-b << endl;
        if(op == '*') cout << a*b << endl;
        if(op == '/') cout << a/b << endl;
    }
}