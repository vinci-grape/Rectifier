#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> srimeList(n);
    for (int i = 0; i < n; i++) {
        cin >> srimeList[i];
    }
    vector<long> costList(n);
    for (int i = 0; i < n; i++) {
        costList[i] = srimeList[i];
        for (int j = 1; j < n; j++) {
            costList[i] = min(costList[i], srimeList[(i - j + n) % n]);
        }
    }
    vector<long> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = i * srimeList[i] + costList[i].sum();
    }
    sort(result.begin(), result.end());
    cout << result[0];
    return 0;
}