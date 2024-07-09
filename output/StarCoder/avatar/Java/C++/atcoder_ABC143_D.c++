#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector <int> L;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        L.push_back(temp);
    }
    sort(L.begin(), L.end());
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int a = L[i];
            int b = L[j];
            int res = find(L, j + 1, a + b);
            count = count + res;
        }
    }
    cout << count << endl;
}
int find(vector <int> li, int from, int target)
{
    int low = from;
    int upp = li.size() - 1;
    int mid = (upp - low + 1) % 2 == 0? (low + upp) / 2 + 1 : (low + upp) / 2;
    if (upp - low < 0)
    {
        return 0;
    }
    else if (li[from] >= target)
    {
        return 0;
    }
    else if (li[upp] < target)
    {
        return upp - low + 1;
    }
    while (upp - low > 1)
    {
        if (li[mid] >= target)
        {
            upp = mid;
        }
        else
        {
            low = mid;
        }
        mid = (upp - low + 1) % 2 == 0? (low + upp) / 2 + 1 : (low + upp) / 2;
    }
    return low - from + 1;
}