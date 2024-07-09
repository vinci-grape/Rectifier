#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cout << ceil(n / *min_element(a, a + 5)) + 4;
    return 0;
}