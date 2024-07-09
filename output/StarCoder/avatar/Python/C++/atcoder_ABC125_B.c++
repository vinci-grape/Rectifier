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
        cin >> C[i];
    }
    int list[N];
    int ans = 0;
    int X, Y;
    for (int i = 0; i < N; i++)
    {
        if (V[i] - C[i] > 0)
        {
            X = V[i];
            Y = C[i];
            list[i] = X - Y;
        }
    }
    for (int i = 0; i < N; i++)
    {
        ans += list[i];
    }
    cout << ans;
    return 0;
}