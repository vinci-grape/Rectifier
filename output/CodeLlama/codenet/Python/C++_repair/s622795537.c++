#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> arr;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (arr.find(s) == arr.end()) {
            arr[s] = 1;
        }
        else {
            arr[s]++;
        }
    }

    int max_count = 0;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        if (it->second > max_count) {
            max_count = it->second;
        }
    }

    vector<string> dic;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        if (it->second == max_count) {
            dic.push_back(it->first);
        }
    }

    sort(dic.begin(), dic.end());
    for (auto it = dic.begin(); it != dic.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}