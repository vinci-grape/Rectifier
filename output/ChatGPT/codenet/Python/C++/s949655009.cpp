#include <iostream>
#include <vector>
using namespace std;

int main() {
    string strn;
    cin >> strn;
    int n = stoi(strn);
    vector<string> shichigolist = {"3", "5", "7"};
    vector<vector<string>> shichigo(strn.length());

    for (int i = 0; i < strn.length(); i++) {
        if (i == 0) {
            for (string j : shichigolist) {
                shichigo[i].push_back(j);
            }
        } else {
            for (string j : shichigo[i-1]) {
                for (string k : shichigolist) {
                    shichigo[i].push_back(j + k);
                }
            }
        }
    }

    int target = strn.length() - 1;
    for (int i = 0; i < strn.length(); i++) {
        for (int j = shichigo[i].size() - 1; j >= 0; j--) {
            string current = shichigo[i][j];
            if (i == target) {
                if (stoi(current) > n) {
                    shichigo[target].erase(shichigo[target].begin() + j);
                } else if (count(current.begin(), current.end(), '3') == 0 || count(current.begin(), current.end(), '5') == 0 || count(current.begin(), current.end(), '7') == 0) {
                    shichigo[target].erase(shichigo[target].begin() + j);
                }
            } else {
                if (count(current.begin(), current.end(), '3') == 0 || count(current.begin(), current.end(), '5') == 0 || count(current.begin(), current.end(), '7') == 0) {
                    shichigo[i].erase(shichigo[i].begin() + j);
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < strn.length(); i++) {
        sum += shichigo[i].size();
    }
    cout << sum << endl;

    return 0;
}