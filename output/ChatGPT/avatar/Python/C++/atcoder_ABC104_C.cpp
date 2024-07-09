#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int D, G;
    cin >> D >> G;
    
    vector<pair<int, int>> PC;
    for (int i = 0; i < D; i++) {
        int p, c;
        cin >> p >> c;
        PC.push_back(make_pair(p, c));
    }
    
    int ans = pow(10, 9);
    for (int i = 0; i < pow(2, D); i++) {
        int score = 0;
        int problem = 0;
        for (int j = 0; j < D; j++) {
            if ((i >> j) & 1) {
                score += 100 * (j + 1) * PC[j].first + PC[j].second;
                problem += PC[j].first;
            }
        }
        if (score > G) {
            continue;
        }
        int left = G - score;
        for (int j = 0; j < D; j++) {
            if ((i >> j) & 1) {
                continue;
            }
            if (left > 100 * (j + 1) * PC[j].first + PC[j].second) {
                // do nothing
            }
            else {
                int tmp = (left + (100 * (j + 1)) - 1) / (100 * (j + 1));
                ans = min(ans, problem + min(tmp, PC[j].first));
            }
        }
    }
    
    cout << ans << endl;
    
}