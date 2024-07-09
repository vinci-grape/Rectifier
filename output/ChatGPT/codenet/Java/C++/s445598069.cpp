#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string input;
    getline(cin, input);
    istringstream iss(input);

    unordered_map<int, int> s;

    int num;
    while (iss >> num) {
        s[num]++;
    }

    int dec = 0;

    for (auto& pair : s) {
        if (pair.second != 0) {
            if (pair.second % 2 == 0) {
                pair.second = 2;
            } else {
                pair.second = 1;
            }
        }
    }

    int one = 0;
    int two = 0;

    for (auto& pair : s) {
        if (pair.second == 2) {
            two++;
        } else if (pair.second == 1) {
            one++;
        }
    }

    if (two % 2 != 0) {
        one--;
    }

    cout << (two + one) << endl;

    return 0;
}