#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll mod = 998244353;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;

    vector<ll> D(N);
    for (ll i = 0; i < N; i++) cin >> D[i];

    if (D[0] != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    map<ll, ll> cnt;
    for (ll i = 0; i < N; i++) cnt[D[i]]++;

    if (cnt[0] > 1)
    {
        cout << 0 << endl;
        return 0;
    }

    ll res = 1;
    for (ll i = 1; i <= *max_element(D.begin(), D.end()); i++)
    {
        if (cnt[i - 1] == 1)
            continue;
        res = (res * (ll)pow(cnt[i - 1], cnt[i])) % mod;
    }

    cout << res << endl;

    return 0;
}