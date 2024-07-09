#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> cake;
    int happiness = 0;
    int chocCount = 0;
    int nfat = 1;
    
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        cake.push_back(line);
        for (char j : line) {
            if (j == 'C') {
                chocCount++;
            }
        }
        if (chocCount > 1) {
            for (int i = chocCount; i >= chocCount - 2; i--) {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        nfat = 1;
        chocCount = 0;
    }
    
    int posCount = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (cake[i][j] == 'C') {
                chocCount++;
            }
        }
        if (chocCount > 1) {
            for (int i = chocCount; i >= chocCount - 2; i--) {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        nfat = 1;
        chocCount = 0;
    }
    
    cout << happiness << endl;
    
    
    return 0;
}