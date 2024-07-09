#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int result = 0;
    string str;
    while (cin >> str)
    {
        result++;
        if (str == "0")
            break;
    }
    cout << result << endl;
    return 0;
}