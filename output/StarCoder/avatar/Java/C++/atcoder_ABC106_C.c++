#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char c[100000];
    strcpy(c, str.c_str());
    long long int k;
    cin >> k;
    int n = str.length();
    for (int i = 0; i < k; i++)
    {
        if (c[i] == '1')
        {
            if (i == k - 1)
            {
                cout << 1;
                return 0;
            }
        }
        else
        {
            cout << c[i];
            return 0;
        }
    }
}