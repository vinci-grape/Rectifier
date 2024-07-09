#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> list;
    int a;
    
    while(cin >> a) {
        if(a == 0) {
            cout << list.top() << endl;
            list.pop();
        } else {
            list.push(a);
        }
    }
    
    return 0;
}