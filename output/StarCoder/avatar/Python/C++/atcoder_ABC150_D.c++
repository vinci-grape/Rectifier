#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cin >> n >> num;
    set<int> num_set;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        num_set.insert(temp);
    }
    set<int> two_times_set;
    for (int i : num_set)
    {
        for (int j = 1; j < 30; j++)
        {
            i /= 2;
            if (i % 2!= 0)
            {
                two_times_set.insert(j);
                break;
            }
        }
        if (two_times_set.size()!= 1)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    int lcm = *num_set.begin();
    for (int i = 1; i < num_set.size(); i++)
    {
        lcm = lcm * *num_set.begin() / __gcd(lcm, *num_set.begin());
    }
    cout << (num - lcm / 2) / (lcm) + 1 << endl;
    return 0;
}