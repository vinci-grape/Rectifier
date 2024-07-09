#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> sequence;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sequence.push_back(x);
    }
    cout << nPairsWithCommonFX(sequence);
    return 0;
}
int nPairsWithCommonFX(vector<int> sequence) {
    map<int, vector<int>> storage;
    vector<int> FXs;
    for (int value : sequence) {
        int y = f(value);
        if (storage.find(y) == storage.end()) {
            storage[y] = {value};
            FXs.push_back(y);
        } else {
            storage[y].push_back(value);
        }
    }
    int sum = 0;
    for (int y : FXs) {
        sum += storage[y].size() * (storage[y].size() - 1);
    }
    return sum / 2;
}
int f(int n) {
    int y = 1;
    while (n != 1) {
        if (n % 2) {
            y++;
        }
        n /= 2;
    }
    return y;
}