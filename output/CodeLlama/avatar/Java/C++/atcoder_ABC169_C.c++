#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    string b;
    cin >> a >> b;
    string bStr = "";
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] != '.')
        {
            bStr += b[i];
        }
    }
    int bInt = stoi(bStr);
    long long result = (a * bInt) / 100;
    cout << result << endl;
}