#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ve;
    vector<int> vo;
    for (int i = 0; i < n/2; i++) {
        ve.push_back(v[2*i]);
        vo.push_back(v[2*i+1]);
    }
    map<int, int> ce;
    map<int, int> co;
    for (int i = 0; i < ve.size(); i++) {
        ce[ve[i]]++;
    }
    for (int i = 0; i < vo.size(); i++) {
        co[vo[i]]++;
    }
    int ans = n;
    if (ce.begin()->first != co.begin()->first) {
        ans = n - ce.begin()->second - co.begin()->second;
    }
    else if (ce.size() == 1 && co.size() == 1) {
        ans = n - ce.begin()->second;
    }
    else if (ce.size() == 1) {
        ans = n - ce.begin()->second - next(co.begin())->second;
    }
    else if (co.size() == 1) {
        ans = n - next(ce.begin())->second - co.begin()->second;
    }
    else {
        ans = min(n - ce.begin()->second - next(co.begin())->second, n - next(ce.begin())->second - co.begin()->second);
    }
    cout << ans << endl;
    
    return 0;
}