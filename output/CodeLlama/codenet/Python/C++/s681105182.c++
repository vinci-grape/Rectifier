#include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define pb push_back
#define all(v) v.begin(), v.end()
#define mp make_pair
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int N = 1e5 + 10;
const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vi a_li(N);
    for (int i = 0; i < N; ++i) {
        cin >> a_li[i];
    }

    sort(all(a_li));

    int n = a_li[N - 1];

    int dif = INF;
    int prev_dif = dif;
    for (int i = 0; i < N - 1; ++i) {
        dif = min(abs(n / 2 - a_li[i]), dif);
        if (dif != prev_dif) {
            cout << n << " " << a_li[i] << endl;
            return 0;
        }
    }

    return 0;
}