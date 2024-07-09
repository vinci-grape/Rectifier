#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> odd = {"R", "U", "D"};
    set<string> even = {"L", "U", "D"};
    string N;
    cin >> N;
    for (int i = 0; i < N.length(); i++) {
        if ((i + 1) % 2 == 0) {
            if (even.find(N[i]) == even.end()) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (odd.find(N[i]) == odd.end()) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}