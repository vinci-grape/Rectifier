#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int a = stoi(s.substr(0,2));
    int b = stoi(s.substr(3,2));
    int c = stoi(t.substr(0,2));
    int d = stoi(t.substr(3,2));
    cout << (a-c)*60 + (b-d) << endl;
}