#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int mn = N + 1, mx = -1;
    for (int i = 0; i < N; i++)
    {
        if (i + 1!= A[i])
        {
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    if (mx == -1)
    {
        cout << "0 0" << endl;
    }
    else
    {
        A.erase(A.begin() + mn, A.begin() + mx + 1);
        A.insert(A.begin() + mn, A.begin() + mx + 1, A.begin() + mn, A.end());
        if (is_sorted(A.begin(), A.end()))
        {
            cout << mn + 1 << " " << mx + 1 << endl;
        }
        else
        {
            cout << "0 0" << endl;
        }
    }
    return 0;
}