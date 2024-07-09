#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, vector<int>> map;

    for (int i = 0; i < k; i++) {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++) {
            int person;
            cin >> person;

            if (map.find(person) == map.end()) {
                map[person] = vector<int>();
            }
            map[person].push_back(d);
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (map.find(i) == map.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}