#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, L, R, QL, QR;
    cin >> n >> L >> R >> QL >> QR;
    vector<int> W(n);
    for (int i = 0; i < n; i++)
        cin >> W[i];
    vector<int> sum_el(n + 1);
    for (int i = 1; i <= n; i++)
        sum_el[i] = W[i - 1] + sum_el[i - 1];
    int answer = QR * (n - 1) + sum_el[n] * R;
    for (int i = 1; i <= n; i++)
    {
        int energy = L * sum_el[i] + R * (sum_el[n] - sum_el[i]) + (i - (n - i) - 1) * QL;
        if (energy < answer)
            answer = energy;
        energy = L * sum_el[i] + R * (sum_el[n] - sum_el[i]) + (n - i - 1) * QR;
        if (energy < answer)
            answer = energy;
    }
    cout << answer;
    return 0;
}