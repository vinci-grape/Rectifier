#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<int, int> hm;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        hm[val]++;
    }
    
    int ans = 0;
    for (auto it : hm) {
        int num = it.second;
        if (num > it.first)
            ans += num - it.first;
        else if (num < it.first)
            ans += num;
    }
    
    cout << ans << endl;
    
    return 0;
}