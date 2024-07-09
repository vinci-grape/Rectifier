#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
using namespace std;
int main() {
    int n;
    cin >> n;
    int maxn = 4010;
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    int dp[maxn];
    for (int i = 0; i < n; i++) {
        dp[i] = INT_MIN;
    }
    dp[0] = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = arr[i]; j < maxn; j++) {
            dp[j] = max(dp[j], dp[j - arr[i]] + 1);
        }
    }
    cout << dp[n] << endl;
}