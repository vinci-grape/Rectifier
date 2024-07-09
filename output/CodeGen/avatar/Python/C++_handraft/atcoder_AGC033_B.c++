#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, m, s_r, s_c, S_L, S_R, S_U, S_D, T_L, T_R, T_U, T_D;
char S[maxn], T[maxn];
bool Judge;

int main() {
    scanf("%d%d", &n, &m);
    scanf("%s", S);
    scanf("%s", T);
    S_L = S_R = S_U = S_D = T_L = T_R = T_U = T_D = 0;
    for(int i = 0; i < n; i++) {
        if(S[i] == 'L') S_L++;
        if(S[i] == 'R') S_R++;
        if(S[i] == 'U') S_U++;
        if(S[i] == 'D') S_D++;
    }
    for(int i = 0; i < m; i++) {
        if(T[i] == 'L') T_L++;
        if(T[i] == 'R') T_R++;
        if(T[i] == 'U') T_U++;
        if(T[i] == 'D') T_D++;
    }
    Judge = false;
    if(S_L - T_R - s_c == 0 && S_R - T_L - s_c == 0 && S_U - T_D - s_r == 0 && S_D - T_U - s_r == 0) {
        Judge = true;
    }
    if(Judge) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}