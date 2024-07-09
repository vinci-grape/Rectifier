#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    map<int, int> m;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 10 == 0)
        {
            m.insert(pair<int, int>(i, 0));
        }
        else
        {
            m.insert(pair<int, int>(i, a[i] % 10));
        }
    }
    int min_num = *min_element(m.begin(), m.end(), [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; });
    int a_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        a_sum += a[i];
    }
    m.erase(min_num);
    cout << abs(accumulate(m.begin(), m.end(), 0, [](int a, pair<int, int> b) { return a + b.second; })) + a_sum << endl;
}