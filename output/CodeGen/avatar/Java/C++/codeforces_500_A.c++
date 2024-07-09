#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class codeforces_500_A {
public:
    static bool dfs(int currpos, vector<int>& arr, int target);
    static void main(void);
};

bool codeforces_500_A::dfs(int currpos, vector<int>& arr, int target) {
    if (currpos == target) return true;
    if (currpos == arr.size() + 1) return false;
    bool teleport = dfs(currpos + arr[currpos - 1], arr, target);
    if (teleport) return true;
    return false;
}

void codeforces_500_A::main(void) {
    int n, goal;
    cin >> n >> goal;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    bool isFound = dfs(1, arr, goal);
    if (isFound) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}