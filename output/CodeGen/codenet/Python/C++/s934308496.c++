#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> m[i];
    }
    m.sort();
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += m[i];
    }
    cout << n + (x - sum) / m[0];
    return 0;
}