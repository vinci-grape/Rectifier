#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(-num);
    }
    make_heap(a.begin(), a.end());

    auto dis = [](int x, int y) -> int { return x / pow(2, y); };

    for (int i = 0; i < m; i++) {
        int top = a.front();
        pop_heap(a.begin(), a.end());
        a.pop_back();
        a.push_back(-dis(-top, 1));
        push_heap(a.begin(), a.end());
    }

    int sum = 0;
    for (int num : a) {
        sum += -num;
    }
    cout << sum << endl;

    return 0;
}