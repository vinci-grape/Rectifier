#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> capacity_list(5);
    for (int i = 0; i < 5; ++i) {
        cin >> capacity_list[i];
    }
    sort(capacity_list.begin(), capacity_list.end());
    int bottle_neck = capacity_list[0];
    cout << 4 + (n + bottle_neck - 1) / bottle_neck;
    return 0;
}