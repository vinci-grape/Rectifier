#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int lista[n];
    int listb[n];
    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> listb[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (lista[i] == i + 1)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
    return 0;
}