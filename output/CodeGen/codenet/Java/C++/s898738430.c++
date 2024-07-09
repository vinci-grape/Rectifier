#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n-1; i++) {
        if(a[i]!= min(a[i-1], min(a[i], a[i+1]))
                && a[i]!= max(a[i-1], max(a[i], a[i+1]))){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}