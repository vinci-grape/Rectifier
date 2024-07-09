#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "Hello World" << endl;
    } else {
        string s1, s2;
        cin >> s1 >> s2;
        int a = stoi(s1), b = stoi(s2);
        cout << a + b << endl;
    }
    return 0;
}