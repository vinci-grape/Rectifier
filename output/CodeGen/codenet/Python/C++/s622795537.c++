#include <iostream>
#include <string>
#include <map>
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
        } else {
            arr[s] += 1;
        }
    }
    int max_count = 0;
    for (auto it = arr.begin(); it!= arr.end(); it++) {
        if (it->second > max_count) {
            max_count = it->second;
        }
    }
    for (auto it = arr.begin(); it!= arr.end(); it++) {
        if (it->second == max_count) {
            cout << it->first << endl;
        }
    }
    return 0;
}