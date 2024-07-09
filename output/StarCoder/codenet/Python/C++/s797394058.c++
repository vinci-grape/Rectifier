#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x = 1;
    vector<int> N_list;
    for (int i = 0; i < N; i++)
    {
        N_list.push_back(x + 1);
        x++;
    }
    int m = 1;
    for (int i = 0; i < N; i++)
    {
        m = m * (N_list[i] + 1);
    }
    cout << m;
    return 0;
}