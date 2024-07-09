#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> q;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        vector<string> a;
        string temp;
        for (int j = 0; j < 2; j++) {
            cin >> temp;
            a.push_back(temp);
        }
        q.push_back(a);
    }
    
    for (int j = 0; j < q.size(); j++) {
        for (int k = 0; k < q.size(); k++) {
            if (k == j) {
                continue;
            }
            else if (q[j][0] == q[k][1]) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}