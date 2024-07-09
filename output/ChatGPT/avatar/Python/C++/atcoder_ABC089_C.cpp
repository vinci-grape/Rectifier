#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    
    vector<char> march = {'M', 'A', 'R', 'C', 'H'};
    vector<int> march_lis(5, 0);
    for (string s : S) {
        char c = toupper(s[0]);
        if (find(march.begin(), march.end(), c) != march.end()) {
            march_lis[find(march.begin(), march.end(), c) - march.begin()]++;
        }
    }
    
    long long ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 4; j++) {
            for (int k = j+1; k < 5; k++) {
                ans += march_lis[i] * march_lis[j] * march_lis[k];
            }
        }
    }
    
    cout << ans << endl;
    
}