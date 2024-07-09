#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    set<int> left;
    for (int i = 0; i < n; i++)
    {
        left.insert(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, win;
        cin >> l >> r >> win;
        while (left.find(l)!= left.end() && left.find(l) <= r)
        {
            int curr = *left.find(l);
            left.erase(curr);
            answer[curr] = win;
            left.insert(win - 1);
        }
        answer[win - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}