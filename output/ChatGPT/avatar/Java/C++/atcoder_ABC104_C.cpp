#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int INF = 100000;

int main() {
    int D, min = INF;
    long G;
    cin >> D >> G;
    
    vector<int> p(D), c(D);
    
    for (int i = 0; i < D; i++) {
        cin >> p[i] >> c[i];
    }
    
    for (int bit = 0; bit < (1 << D); bit++) {
        int score = 0, solve_num = 0;
        
        for (int i = 0; i < D; i++) {
            if ((bit & (1 << i)) != 0) {
                score += 100 * (i + 1) * p[i] + c[i];
                solve_num += p[i];
            }
        }
        
        if (score < G) {
            for (int i = D - 1; i >= 0; i--) {
                if ((bit & (1 << i)) == 0) {
                    for (int j = 0; j < p[i] - 1; j++) {
                        score += 100 * (i + 1);
                        solve_num++;
                        if (score >= G) {
                            break;
                        }
                    }
                }
            }
        }
        
        if (score >= G) {
            min = min(min, solve_num);
        }
    }
    
    cout << min << endl;
    
    return 0;
}