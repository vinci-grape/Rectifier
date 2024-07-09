#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class atcoder_ABC150_C {
public:
    vector<string> permutation(vector<string>& list, string target, string ans) {
        if (target.size() <= 1) {
            list.push_back(ans + target);
        } else {
            for (int i = 0; i < target.size(); ++i) {
                permutation(list, target.substr(0, i) + target.substr(i + 1), ans + target.at(i));
            }
        }
        return list;
    }
    void print(vector<string>& list) {
        for (auto it = list.begin(); it!= list.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    int main() {
        int n;
        cin >> n;
        string number;
        for (int i = 1; i <= n; ++i) {
            number += i;
        }
        vector<string> listA;
        permutation(listA, number, "");
        int sum = 0;
        for (int j = 0; j < 2; ++j) {
            for (int i = 0; i < listA.size(); ++i) {
                if (listA[i] == line[j][0]) {
                    if (sum == 0) {
                        sum += i;
                    } else {
                        sum -= i;
                    }
                }
            }
        }
        cout << abs(sum) << endl;
        return 0;
    }
};