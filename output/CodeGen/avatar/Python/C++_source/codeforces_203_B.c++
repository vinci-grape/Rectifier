#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxForm ( vector<string>& strs, int m, int n ) {
        int ans = - 1;
        vector<int> count(n,0);
        for ( int i = 0 ; i < m ; ++i ) {
            int x,y;
            sscanf(strs[i].c_str(),"%d %d",&x,&y);
            x--;
            y--;
            for ( int j = x - 2 ; j <= x + 1 ; ++j ) {
                for ( int k = y - 2 ; k <= y + 1 ; ++k ) {
                    if ( j >= 0 && j < n && k >= 0 && k < n ) {
                        count[j] += 1;
                        if ( count[j] == 9 ) {
                            ans = i + 1;
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main ( ) {
    vector<string> strs;
    int m,n;
    cin >> m >> n;
    for ( int i = 0 ; i < m ; ++i ) {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    Solution sol;
    int ans = sol.findMaxForm(strs,m,n);
    cout << ans << endl;
    return 0;
}