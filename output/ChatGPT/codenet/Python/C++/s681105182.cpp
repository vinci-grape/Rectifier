#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a_li(N);
    for (int i = 0; i < N; i++) {
        cin >> a_li[i];
    }

    sort(a_li.begin(), a_li.end());

    int n = a_li[N-1];
    
    int dif = 1e18;
    int prev_dif = dif;
    int r = 0;
    for (int i = 0; i < N-1; i++) {
        int a = a_li[i];
        dif = min(abs(n/2 - a), dif);
        if (dif != prev_dif) {
            r = a;
            prev_dif = dif;
        }
    }

    cout << n << " " << r << endl;

    return 0;
}