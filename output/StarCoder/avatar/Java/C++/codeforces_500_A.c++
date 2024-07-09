#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, goal;
    cin >> n >> goal;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    bool isFound = false;
    for (int i = 1; i <= goal; i++)
    {
        if (dfs(i, arr, goal))
        {
            isFound = true;
            break;
        }
    }
    if (isFound)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

bool dfs(int currpos, int arr[], int target)
{
    if (currpos == target)
        return true;
    if (currpos == n + 1)
        return false;
    bool teleport = dfs(currpos + arr[currpos - 1], arr, target);
    if (teleport)
        return true;
    return false;
}

Time Complexity: O(N)
Space Complexity: O(N)