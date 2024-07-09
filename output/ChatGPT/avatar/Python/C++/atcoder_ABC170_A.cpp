#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        a.push_back(num);
    }
    
    for (int e = 0; e < a.size(); e++) {
        if (a[e] == 0) {
            cout << e + 1 << endl;
            break;
        }
    }
    
    return 0;
}