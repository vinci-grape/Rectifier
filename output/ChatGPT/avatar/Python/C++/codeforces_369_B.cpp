#include <iostream>
#include <vector>
using namespace std;

vector<int> get_nums(int num, int t) {
    vector<int> result;
    for (int i = 0; i < num; i++) {
        if (i < t % num)
            result.push_back(t / num + 1);
        else
            result.push_back(t / num);
    }
    return result;
}

int main() {
    int n, k, l, r, sa, sk;
    cin >> n >> k >> l >> r >> sa >> sk;
    
    vector<int> ans = get_nums(k, sk);
    vector<int> ans2 = get_nums(n - k, sa - sk);
    ans.insert(ans.end(), ans2.begin(), ans2.end());
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}