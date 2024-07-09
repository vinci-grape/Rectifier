#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> lista(n);
    vector<int> listb(n);
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
        if (i + 1 == lista[i])
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