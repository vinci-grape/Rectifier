#include <iostream>
#include <vector>
#include <string>
using namespace std;

void permutation(vector<string>& list, string target, string ans) {
    if (target.length() <= 1) {
        list.push_back(ans + target);
    } else {
        for (int i = 0; i < target.length(); i++) {
            permutation(list, target.substr(0, i) + target.substr(i + 1), ans + target[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    string line[2][1];
    for (int i = 0; i < 2; i++) {
        line[i][0] = "";
        for (int j = 0; j < n; j++) {
            string input;
            cin >> input;
            line[i][0] += input;
        }
    }
    string number = "";
    for (int i = 1; i <= n; i++) {
        number += to_string(i);
    }
    vector<string> listA;
    permutation(listA, number, "");
    int sum = 0;
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < listA.size(); i++) {
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

}