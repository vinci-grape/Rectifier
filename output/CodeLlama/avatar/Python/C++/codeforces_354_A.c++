#include <iostream>
using namespace std;
int main()
{
    int n, L, R, QL, QR;
    cin >> n >> L >> R >> QL >> QR;
    int W[n];
    for (int i = 0; i < n; i++)
        cin >> W[i];
    int sum_el[n + 1];
    sum_el[0] = 0;
    for (int i = 1; i < n + 1; i++)
        sum_el[i] = W[i - 1] + sum_el[i - 1];
    int answer = QR * (n - 1) + sum_el[n] * R;
    for (int i = 1; i < n + 1; i++)
    {
        int energy = L * sum_el[i] + R * (sum_el[n] - sum_el[i]);
        if (i > (n - i))
            energy = energy + (i - (n - i) - 1) * QL;
        else if ((n - i) > i)
            energy = energy + ((n - i) - i - 1) * QR;
        if (energy < answer)
            answer = energy;
    }
    cout << answer;
    return 0;
}