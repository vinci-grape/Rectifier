#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct c462b {
    int left = 0;
    bool operator<(const c462b& other) const {
        return left > other.left;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<c462b> cards(26);
    
    string s;
    cin >> s;
    
    for (int t = 0; t < n; t++) {
        cards[s[t] - 'A'].left++;
    }
    
    long long ans = 0;
    
    for (int i = 0; i < k; i++) {
        sort(cards.begin(), cards.end());
        int change = min(cards[0].left, k - i);
        ans += change * change;
        cards[0].left -= change;
    }
    
    cout << ans << endl;
    
    return 0;
}