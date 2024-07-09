#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[10] = {0};
    a[7] = a[5] = a[3] = 1;
    int ans = a[7] + a[5] + a[3];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
            continue;
        string s = to_string(i);
        for (int j = 0; j < s.length(); j++)
        {
            int num = s[j] - '0';
            ans += a[num];
        }
    }
    cout << ans << endl;
    return 0;
}