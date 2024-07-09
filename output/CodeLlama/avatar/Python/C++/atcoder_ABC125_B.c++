#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int V[N], C[N];
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }
    int list[N + 1];
    list[0] = 0;
    int ans = 0;
    int X = 0, Y = 0;
    for (int i = 0; i < N; i++)
    {
        if (V[i] - C[i] > 0)
        {
            X = V[i];
            Y = C[i];
            list[i + 1] = X - Y;
        }
    }
    for (int i = 0; i < N + 1; i++)
    {
        ans += list[i];
    }
    cout << ans;
    return 0;
}