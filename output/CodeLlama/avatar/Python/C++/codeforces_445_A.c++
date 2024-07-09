#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                if ((i + j) & 1)
                    s[i][j] = 'W';
                else
                    s[i][j] = 'B';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}