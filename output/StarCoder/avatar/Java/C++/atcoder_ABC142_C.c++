#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> idorder;
    for (int i = 1; i <= N; i++)
    {
        int A;
        cin >> A;
        idorder[A] = i;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << idorder[i] << " ";
    }
    return 0;
}