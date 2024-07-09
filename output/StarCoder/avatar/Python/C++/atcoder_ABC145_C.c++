#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    double result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double distance = sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
            result += distance;
        }
    }
    result /= N * (N - 1) / 2;
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}