#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i, j, t, max, k, x, y, min, correct_ans, num, num_penal;
    long a, b, sum;

    string str;

    cin >> n >> m;

    int penal[n+1];
    bool solved[n+1];
    memset(solved, false, sizeof(solved));

    for(i=0; i<m; i++){
        cin >> num;
        cin >> str;
        if(str[0] == 'A'){
            solved[num] = true;
        }else
            if(solved[num] == false)
                penal[num]++;
    }

    correct_ans = 0;
    num_penal = 0;
    for(i=1; i<=n; i++){
        if(solved[i] == true){
            correct_ans++;
            num_penal+=penal[i];
        }

    }

    cout << correct_ans << " " << num_penal << "\n";

    return 0;
}