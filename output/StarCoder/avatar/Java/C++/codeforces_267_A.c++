#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sub(a, b) << endl;
    }
    return 0;
}
int sub(int a, int b)
{
    int min = min(a, b);
    int max = max(a, b);
    int result = 0;
    while (min > 0)
    {
        result += max / min;
        max = max % min;
        int curr_min = min(min, max);
        int curr_max = max(min, max);
        min = curr_min;
        max = curr_max;
    }
    return result;
}