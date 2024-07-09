#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

map<int, int> str2List(string str) {
    vector<string> vArrStr;
    stringstream ss(str);
    string token;
    
    while (getline(ss, token, ' ')) {
        vArrStr.push_back(token);
    }
    
    map<int, int> ret;
    int key = 0;
    for (string val : vArrStr) {
        ret[key] = stoi(val);
        key++;
    }
    
    return ret;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    string vStr, cStr;
    getline(cin, vStr);
    getline(cin, cStr);
    
    map<int, int> vList = str2List(vStr);
    map<int, int> cList = str2List(cStr);
    
    int max = 0;
    for (int i = 0; i < n; i++) {
        int profit = vList[i] - cList[i];
        if (profit > 0) {
            max += profit;
        }
    }
    
    cout << max << endl;
    
    return 0;
}