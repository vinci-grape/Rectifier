#include <cstdio>
#include <queue>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

const int H = 0;
const int W = 0;
const int MAX = 0;

class atcoder_AGC033_A {
public:
    atcoder_AGC033_A() {
        scanf("%d %d", &H, &W);
        for (int i = 0; i < H; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < W; ++j) {
                if (row[j] == '#') {
                    int start[3] = { i, j, 0 };
                    queue.push(start);
                }
            }
        }
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                if (flag[i][j] == 0 && A[i][j] == '.') {
                    flag[i][j] = 1;
                    int add[3] = { i, j, 0 };
                    queue.push(add);
                }
            }
        }
    }
    int get_ans() {
        return ans;
    }
private:
    int ans = 0;
    int H = 0;
    int W = 0;
    char A[H][W];
    queue<int*> queue;
    int flag[H][W];
};

int main() {
    atcoder_AGC033_A a;
    int ans = a.get_ans();
    cout << ans << endl;
    return 0;
}