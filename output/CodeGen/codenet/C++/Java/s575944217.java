#include <algorithm>
#include <iostream>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <vector>
using namespace std;
typedef long long ll;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
#define MAX_V 100001
#define MOD 1000000007
typedef vector<vector<int> > Graph;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int> > &matrix) {
            int n = matrix.size();
            if (n == 0) return vector<int>();
            int m = matrix[0].size();
            if (m == 0) return vector<int>();
            vector<int> ans(n * m);
            int i = 0, j = 0;
            int k = 0;
            while (i < n && j < m) {
                for (int l = 0; l < m - k && i < n; l++) {
                    ans[k++] = matrix[i][j++];
                }
                for (int l = m - 1; l >= k && j < m; l--) {
                    ans[k++] = matrix[i++][j];
                }
                for (int l = m - 1; l >= k && i < n; l--) {
                    ans[k++] = matrix[i][j++];
                }
                for (int l = m - 1; l >= k && j < m; l--) {
                    ans[k++] = matrix[i++][j];
                }
                k = 0;
            }
            return ans;
        }
};

int main(){
    int n;cin>>n;
    vector<vector<int> > matrix(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a;cin>>a;
            a--;
            matrix[i][j]=a;
        }
    }
    Solution sol;
    vector<int> ans = sol.spiralOrder(matrix);
    for(int i=0;i<n;i++) cout<<ans[i]<<endl;
}