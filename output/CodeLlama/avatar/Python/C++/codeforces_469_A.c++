#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int max_level;
    cin >> max_level;
    string input;
    cin >> input;
    istringstream iss(input);
    set<int> x;
    while (iss >> input) {
        x.insert(stoi(input));
    }
    cin >> input;
    iss.str(input);
    set<int> y;
    while (iss >> input) {
        y.insert(stoi(input));
    }
    x.erase(0);
    y.erase(0);
    set<int> z = x;
    z.insert(y.begin(), y.end());
    if (z.size() != max_level) {
        cout << "Oh, my keyboard!" << endl;
    } else {
        cout << "I become the guy." << endl;
    }
    return 0;
}