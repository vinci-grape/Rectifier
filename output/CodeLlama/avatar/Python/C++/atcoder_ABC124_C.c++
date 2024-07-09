#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> even, odd;
    for (int i = 0; i < s.length(); i += 2)
        even[s[i]]++;
    for (int i = 1; i < s.length(); i += 2)
        odd[s[i]]++;
    int a = s.length() - (even['0'] + odd['1']);
    int b = s.length() - (even['1'] + odd['0']);
    cout << min(a, b);
    return 0;
}