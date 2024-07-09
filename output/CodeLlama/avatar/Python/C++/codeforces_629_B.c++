#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N = 368;
    int m[N] = {0};
    int f[N] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x, a, b;
        cin >> x >> a >> b;
        int a1 = stoi(a);
        int b1 = stoi(b) + 1;
        if (x == "M")
        {
            m[a1] += 2;
            m[b1] -= 2;
        }
        else
        {
            f[a1] += 2;
            f[b1] -= 2;
        }
    }
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < N; i++)
    {
        a += m[i];
        b += f[i];
        if (min(a, b) > c)
            c = min(a, b);
    }
    cout << c;
    return 0;
}