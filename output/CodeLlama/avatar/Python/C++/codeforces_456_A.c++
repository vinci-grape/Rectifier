#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i][0] >> m[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i][1] < m[j][1])
            {
                int temp = m[i][0];
                m[i][0] = m[j][0];
                m[j][0] = temp;
                temp = m[i][1];
                m[i][1] = m[j][1];
                m[j][1] = temp;
            }
        }
    }
    int a[2];
    a[0] = m[0][0];
    a[1] = m[0][1];
    for (int i = 1; i < n; i++)
    {
        if (m[i][1] > a[1])
        {
            cout << "Happy Alex" << endl;
            break;
        }
        a[0] = m[i][0];
        a[1] = m[i][1];
    }
    if (i == n)
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}