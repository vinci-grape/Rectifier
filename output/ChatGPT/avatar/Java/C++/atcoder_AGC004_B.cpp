#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    long long x;
    cin >> N >> x;

    vector<long long> primeList(N);
    for (int i = 0; i < N; i++) {
        cin >> primeList[i];
    }

    vector<vector<long long>> costList(N, vector<long long>(N));
    for (int i = 0; i < N; i++) {
        costList[i][0] = primeList[i];
        for (int castNum = 1; castNum < N; castNum++) {
            costList[i][castNum] = min(costList[i][castNum - 1], primeList[(i - castNum + N) % N]);
        }
    }

    vector<long long> result(N);
    for (int i = 0; i < N; i++) {
        result[i] = i * x + accumulate(costList.begin(), costList.end(), 0, [i](const vector<long long>& costArray) {
            return costArray[i];
        });
    }

    cout << *min_element(result.begin(), result.end()) << endl;

    return 0;
}