#include <iostream>
#include <stack>
using namespace std;

int main() {
    string x;
    cin >> x;
    stack<char> s;
    int c = 0;

    for (int i = 0; i < x.length(); i++) {
        s.push(x[i]);
        while (s.size() > 1) {
            char p = s.top();
            s.pop();
            char q = s.top();
            s.pop();
            if ((p == '1' && q == '0') || (p == '0' && q == '1')) {
                c++;
                continue;
            } else {
                s.push(q);
                s.push(p);
                break;
            }
        }
    }

    cout << c * 2 << endl;

    return 0;
}