#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter an operation (+,-,*,/,?) ";
    cin >> b;
    cout << "Enter another number: ";
    cin >> a;
    cout << "Enter another operation: ";
    cin >> b;
    if(b=='?') break;
    if(b=='+') cout << a+b << endl;
    if(b=='-') cout << a-b << endl;
    if(b=='*') cout << a*b << endl;
    if(b=='/') cout << a/b << endl;
    return 0;
}