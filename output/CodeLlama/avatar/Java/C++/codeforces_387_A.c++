#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int h1 = stoi(s.substr(0, 2));
    int m1 = stoi(s.substr(3, 2));
    int h2 = stoi(t.substr(0, 2));
    int m2 = stoi(t.substr(3, 2));
    cout << h1 - h2 << ":" << m1 - m2;
    return 0;
}