#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> map;
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    for (int i = 0; i < n; i++) {
        string key;
        getline(cin, key);
        map[key] = "";
    }
    
    cout << map.size() << endl;
    
    return 0;
}