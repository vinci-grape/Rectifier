#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[j] == i || b[j] == i)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}