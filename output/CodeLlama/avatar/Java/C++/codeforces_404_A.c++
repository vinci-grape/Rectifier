#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n][n];
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = str[i][j];
        }
    }
    char a = arr[0][0];
    char b = arr[0][1];
    if (a == b)
    {
        cout << "NO";
    }
    else
    {
        bool res = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    if (arr[i][j] != a)
                    {
                        res = false;
                        break;
                    }
                }
                else
                {
                    if (arr[i][j] != b)
                    {
                        res = false;
                        break;
                    }
                }
            }
        }
        if (res)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}