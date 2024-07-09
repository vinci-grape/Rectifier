#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX_M = 100000;
const int MAX_N = 100000;
const int MAX_T = 100000;

int memory[MAX_M];
int allocIdx = 0;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m;
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &memory[i]);
        }
        int n;
        scanf("%d", &n);
        while (n--) {
            char cmd[10];
            scanf("%s", cmd);
            if (strcmp(cmd, "alloc") == 0) {
                int n;
                scanf("%d", &n);
                int len = 0;
                bool canAlloc = false;
                for (int i = 0; i < m; i++) {
                    if (memory[i] == 0) len++;
                    else len = 0;
                    if (len == n) {
                        canAlloc = true;
                        len = i - n + 1;
                        break;
                    }
                }
                if (canAlloc) {
                    allocIdx++;
                    for (int i = len; i < len + n; i++) {
                        memory[i] = allocIdx;
                    }
                    printf("%d\n", allocIdx);
                } else {
                    printf("NULL\n");
                }
            } else if (strcmp(cmd, "erase") == 0) {
                int x;
                scanf("%d", &x);
                if (x <= 0) {
                    printf("ILLEGAL_ERASE_ARGUMENT\n");
                    continue;
                }
                bool hasErased = false;
                for (int i = 0; i < m; i++) {
                    if (memory[i] == x) {
                        memory[i] = 0;
                        hasErased = true;
                    }
                }
                if (!hasErased) {
                    printf("ILLEGAL_ERASE_ARGUMENT\n");
                }
            } else if (strcmp(cmd, "defragment") == 0) {
                int d = 0;
                for (int i = 0; i < m; i++) {
                    if (memory[i] == 0) d++;
                    else memory[i - d] = memory[i];
                }
                for (int i = m - d; i < m; i++) memory[i] = 0;
                printf("%d\n", d);
            } else {
                printf("h\n");
            }
        }
    }
    return 0;
}