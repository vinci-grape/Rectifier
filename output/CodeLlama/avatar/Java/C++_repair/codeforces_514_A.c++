#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    vector<long long> list;
    while (x > 0)
    {
        long long r = x % 10;
        if (9 - r < r)
        {
            if (x / 10 == 0 && 9 - r == 0)
                list.push_back(r);
            else
                list.push_back(9 - r);
        }
        else
            list.push_back(r);
        x = x / 10;
    }
    int powVal = 0;
    long long newNumber = 0;
    for (int i = 0; i < list.size(); i++)
    {
        newNumber = newNumber + list[i] * (long long)pow(10, powVal);
        powVal++;
    }
    cout << newNumber << endl;
}