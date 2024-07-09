#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int amari = 0, result = 0;
    result = (B - 1) / (A - 1);
    amari = (B - 1) % (A - 1);
    if (amari != 0)
    {
        result += 1;
    }
    cout << result << endl;
    return 0;
}