#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int current_level = 0;
    int counter = 0;
    int counter_turns = -1;
    while (counter < a.size()) {
        counter_turns++;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != -1 && a[i] <= counter) {
                counter++;
                a[i] = -1;
            }
        }
        reverse(a.begin(), a.end());
    }
    cout << counter_turns;
    return 0;
}