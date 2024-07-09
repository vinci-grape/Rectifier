#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int a[x], b[y], c[z];
    for (int i = 0; i < x; i++)
        cin >> a[i];
    for (int i = 0; i < y; i++)
        cin >> b[i];
    for (int i = 0; i < z; i++)
        cin >> c[i];
    int ab[x * y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            ab[i * y + j] = a[i] + b[j];
    sort(ab, ab + x * y, greater<int>());
    int abc[min(k, x * y) * z];
    for (int i = 0; i < min(k, x * y); i++)
        for (int j = 0; j < z; j++)
            abc[i * z + j] = ab[i] + c[j];
    sort(abc, abc + min(k, x * y) * z, greater<int>());
    for (int i = 0; i < k; i++)
        cout << abc[i] << endl;
    return 0;
}