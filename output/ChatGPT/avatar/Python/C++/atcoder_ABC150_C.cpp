#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> elements(n);
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }
    
    vector<vector<int>> permutations;
    do {
        permutations.push_back(elements);
    } while (next_permutation(elements.begin(), elements.end()));
    
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    
    int pn = -1, qn = -1;
    for (int i = 0; i < permutations.size(); i++) {
        if (permutations[i] == p) {
            pn = i;
        }
        if (permutations[i] == q) {
            qn = i;
        }
        if (pn != -1 && qn != -1) {
            break;
        }
    }
    
    cout << abs(pn - qn) << endl;
    
    return 0;
}