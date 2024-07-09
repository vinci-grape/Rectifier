a, b, c, d, e, k = map(int, input().split())
print("Yay!" if e - a <= k else ":(")

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    cout << (e - a <= k ? "Yay!" : ":(") << endl;

    return 0;
}