#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string vStr;
    cin >> vStr;
    map<int, int> vList;
    for (int i = 0; i < n; ++i) {
        int profit;
        cin >> profit;
        vList[i] = profit;
    }
    string cStr;
    cin >> cStr;
    map<int, int> cList;
    for (int i = 0; i < n; ++i) {
        int profit;
        cin >> profit;
        cList[i] = profit;
    }
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int profit = vList[i] - cList[i];
        if (profit > 0) {
            max += profit;
        }
    }
    cout << max << endl;
    return 0;
}