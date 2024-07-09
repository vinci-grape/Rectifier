#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int current_cell = 0;
    while (current_cell <= t)
    {
        current_cell += s[current_cell - 1];
        if (current_cell == t)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            continue;
        }
    }
    cout << "NO";
    return 0;
}