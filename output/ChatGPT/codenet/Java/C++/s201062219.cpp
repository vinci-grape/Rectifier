#include <iostream>
using namespace std;

int main() {
    int a[100000];
    int c = 0;
    int b = 0;
    string mark;
    int x = 0;
    do {
        cin >> c;
        cin >> mark;
        cin >> b;
        
        if (mark == "?") {
            a[x] = 2000001;
            break;
        } else if (mark == "+") {
            a[x] = c + b;
        } else if (mark == "-") {
            a[x] = c - b;
        } else if (mark == "*") {
            a[x] = c * b;
        } else if (mark == "/") {
            a[x] = c / b;
        }
        x++;
    } while (true);
    
    x = 0;
    do {
        if (a[x] == 2000001) {
            break;
        }
        cout << a[x] << endl;
        x++;
    } while (true);
    
    return 0;
}