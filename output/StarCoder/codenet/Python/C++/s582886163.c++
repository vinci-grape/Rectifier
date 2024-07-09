#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> capacity_list(5);
    for (int i = 0; i < 5; i++) {
        cin >> capacity_list[i];
    }
    sort(capacity_list.begin(), capacity_list.end());
    int bottle_neck = capacity_list[0];
    cout << 4 + (N + bottle_neck - 1) / bottle_neck << endl;
    return 0;
}