#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, m;
    cin >> t >> m;
    
    vector<int> alocuente(m, 0);
    int ind = 1;
    
    for (int i = 0; i < t; i++) {
        string op;
        cin >> op;
        
        if (op == "alloc") {
            int pos = 0;
            for (int j = 0; j < m; j++) {
                if (alocuente[j] == 0) {
                    pos += 1;
                    if (pos == op[1]) {
                        for (int k = j - op[1] + 1; k <= j; k++) {
                            alocuente[k] = ind;
                        }
                        cout << ind << endl;
                        ind += 1;
                        break;
                    }
                } else {
                    pos = 0;
                }
            }
            if (pos != op[1]) {
                cout << "NULL" << endl;
            }
        }
        
        if (op == "erase") {
            int pos = 0;
            if (op[1] == 0 || find(alocuente.begin(), alocuente.end(), op[1]) == alocuente.end()) {
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
            } else {
                for (int j = 0; j < m; j++) {
                    if (op[1] > 0 && alocuente[j] == op[1]) {
                        alocuente[j] = 0;
                    }
                }
            }
        }
        
        if (op == "defragment") {
            int cnt = count(alocuente.begin(), alocuente.end(), 0);
            alocuente.erase(remove(alocuente.begin(), alocuente.end(), 0), alocuente.end());
            for (int j = 0; j < cnt; j++) {
                alocuente.push_back(0);
            }
        }
    }
    
    
    return 0;
}