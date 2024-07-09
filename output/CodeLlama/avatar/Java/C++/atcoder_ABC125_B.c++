#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string vStr;
    cin >> vStr;
    map<int, int> vList = str2List(vStr);
    string cStr;
    cin >> cStr;
    map<int, int> cList = str2List(cStr);
    int max = 0;
    for (int i = 0; i < n; i++) {
        int profit = vList[i] - cList[i];
        if (profit > 0) {
            max += profit;
        }
    }
    cout << max << endl;
}
map<int, int> str2List(string str) {
    string vArrStr[str.length()];
    map<int, int> ret;
    int key = 0;
    for (string val : vArrStr) {
        ret[key] = stoi(val);
        key++;
    }
    return ret;
}