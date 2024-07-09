#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int round_complexity[n];
    int george_complexity[m];
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        i += (round_complexity[i] <= george_complexity[j]);
        j++;
    }
    cout << n - i;
    return 0;
}