#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    cout << a.replace(a.find(","), 1, " ");
}