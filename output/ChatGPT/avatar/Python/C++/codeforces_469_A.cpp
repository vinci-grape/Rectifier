#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int max_level;
    cin >> max_level;

    vector<int> x, y;
    int num;
    for (int i = 0; i < max_level; i++) {
        cin >> num;
        x.push_back(num);
    }
    for (int i = 0; i < max_level; i++) {
        cin >> num;
        y.push_back(num);
    }

    x.erase(x.begin());
    y.erase(y.begin());

    set<int> x_set(x.begin(), x.end());
    set<int> y_set(y.begin(), y.end());

    if (x_set.count(0) > 0) {
        x_set.erase(0);
    }
    else if (y_set.count(0) > 0) {
        y_set.erase(0);
    }

    set<int> z = x_set;
    z.insert(y_set.begin(), y_set.end());

    if (z.size() != max_level) {
        cout << "Oh, my keyboard!" << endl;
    }
    else {
        cout << "I become the guy." << endl;
    }

    return 0;
}