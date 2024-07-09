#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    string c1 = S;
    string c3 = S;
    bool flag = false;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (flag && c1[i] == 'R') {
            flag = false;
            count++;
        }
        if (count == K) {
            break;
        }
        if (c1[i] == 'L') {
            flag = true;
            c1[i] = 'R';
        }
    }
    flag = false;
    count = 0;
    for (int i = 0; i < N; i++) {
        if (flag && c3[i] == 'L') {
            flag = false;
            count++;
        }
        if (count == K) {
            break;
        }
        if (c3[i] == 'R') {
            flag = true;
            c3[i] = 'L';
        }
    }
    count = 1;
    int sum1 = 0;
    char bef = c1[0];
    for (int i = 1; i < N; i++) {
        if (c1[i] == bef) {
            count++;
            if (i == N - 1) {
                sum1 += count - 1;
            }
        } else {
            bef = c1[i];
            sum1 += count - 1;
            count = 1;
        }
    }
    count = 1;
    int sum3 = 0;
    bef = c3[0];
    for (int i = 1; i < N; i++) {
        if (c3[i] == bef) {
            count++;
            if (i == N - 1) {
                sum3 += count - 1;
            }
        } else {
            bef = c3[i];
            sum3 += count - 1;
            count = 1;
        }
    }
    cout << max(sum1, sum3) << endl;
    return 0;
}