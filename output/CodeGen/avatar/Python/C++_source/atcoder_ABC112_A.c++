#include <iostream>
using namespace std;

int main ( ) {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if ( age == 1 ) {
        cout << "Hello World" << endl;
    } else {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}