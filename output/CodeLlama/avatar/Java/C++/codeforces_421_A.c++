#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> list1;
    vector<int> list2;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        list1.push_back(x);
    }
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        list2.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (list1.end() != find(list1.begin(), list1.end(), i + 1))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
}