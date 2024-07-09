#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> read(int len) {
    vector<string> strList;

    for (int i = 0; i < len; i++) {
        string str;
        getline(cin, str);
        strList.push_back(str);
    }

    return strList;
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "Hello World" << endl;
    } else {
        vector<string> strs = read(2);
        cout << stoi(strs[0]) + stoi(strs[1]) << endl;
    }

    return 0;
}