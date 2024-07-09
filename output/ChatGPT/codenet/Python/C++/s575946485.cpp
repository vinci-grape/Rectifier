#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a;
    for (int i = 0; i < 5; i++) {
        int input;
        cin >> input;
        a.push_back(input);
    }

    map<int, int> dic;

    for (int i = 0; i < 5; i++) {
        if (to_string(a[i]).back() == '0') {
            dic[i] = 0;
        } else {
            dic[i] = stoi(to_string(a[i]).back()) - 10;
        }
    }

    int min_num = min_element(dic.begin(), dic.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second;
    })->first;

    int a_sum = accumulate(a.begin(), a.end(), 0);
    dic.erase(min_num);
    cout << abs(accumulate(dic.begin(), dic.end(), 0, [](int sum, const pair<int, int>& p) {
        return sum + p.second;
    })) + a_sum;
    

    return 0;
}