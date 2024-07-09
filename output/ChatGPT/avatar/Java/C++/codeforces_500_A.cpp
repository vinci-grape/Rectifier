#include <iostream>
#include <vector>
using namespace std;

bool dfs(int currpos, vector<int>& arr, int target) {
    if (currpos == target)
        return true;
    if (currpos == arr.size() + 1)
        return false;
    bool teleport = dfs(currpos + arr[currpos - 1], arr, target);
    if (teleport)
        return true;
    return false;
}

int main() {
    int n, goal;
    cin >> n >> goal;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    bool isFound = dfs(1, arr, goal);
    if (isFound)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}