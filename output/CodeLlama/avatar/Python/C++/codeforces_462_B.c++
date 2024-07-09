#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] >= k)
        {
            cout << k * k;
            return 0;
        }
        k -= count[i];
    }
    for (int i = 0; i < 26; i++)
    {
        cout << count[i] * count[i];
    }
    return 0;
}