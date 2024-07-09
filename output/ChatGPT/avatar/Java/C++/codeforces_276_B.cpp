#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    unordered_map<char, int> map;
    int oddCount = 0;
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (map.count(ch)) {
            map[ch]++;
        } 
        else {
            map[ch] = 1;
        }
    }
    
    for (auto entry : map) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }
    
    if (oddCount <= 1 || oddCount % 2 != 0) {
        cout << "First" << endl;
    } 
    else {
        cout << "Second" << endl;
    }
    
    return 0;
}