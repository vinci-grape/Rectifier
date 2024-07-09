#include <iostream>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < num.size(); i++) {
        num[i] = i + 1;
    }
    int count;
    cin >> count;
    regex pattern("(\\d+),(\\d+)");
    vector<int> line(2);
    for (int i = 0; i < count; i++) {
        string next;
        cin >> next;
        smatch matches;
        regex_search(next, matches, pattern);
        for (int j = 0; j < line.size(); j++) {
            line[j] = stoi(matches[j + 1].str()) - 1;
        }
        int change = num[line[0]];
        num[line[0]] = num[line[1]];
        num[line[1]] = change;
    }
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }
}