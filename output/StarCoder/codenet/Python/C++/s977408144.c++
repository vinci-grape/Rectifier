#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l;
    cin >> n >> l;
    string S[n];
    for(int i = 0; i < n; i++) cin >> S[i];
    sort(S, S + n);
    for(int i = 0; i < n; i++) cout << S[i];
    return 0;
}