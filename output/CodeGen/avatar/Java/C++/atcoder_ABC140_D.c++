#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    char c1[N], c3[N];
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
    string S1(c1);
    string S3(c3);
    int sum1 = 0, sum3 = 0;
    char bef = S1[0];
    for (int i = 1; i < N; i++) {
        if (S1[i] == bef) {
            sum1++;
            if (i == N - 1) {
                sum1++;
            }
        } else {
            bef = S1[i];
            sum1++;
        }
    }
    bef = S3[0];
    for (int i = 1; i < N; i++) {
        if (S3[i] == bef) {
            sum3++;
            if (i == N - 1) {
                sum3++;
            }
        } else {
            bef = S3[i];
            sum3++;
        }
    }
    cout << max(sum1, sum3);
    return 0;
}