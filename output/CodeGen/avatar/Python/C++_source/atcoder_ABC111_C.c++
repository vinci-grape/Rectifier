#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 100002 + 1;
int n;
int a[maxn];
int b[maxn];
int cnta[maxn];
int cntb[maxn];
int vala;
int vala1;
int maxCnta;
int maxCnta1;
int valb;
int valb1;
int maxCntb;
int maxCntb1;
int resa;
int resb;
int resa1;
int resb1;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        cnta[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        cntb[b[i]]++;
    }
    if (a[0]!= b[0]) {
        printf("0\n");
        return 0;
    }
    vala = 0;
    vala1 = 0;
    maxCnta = 0;
    maxCnta1 = 0;
    for (int i = 0; i < n; i++) {
        if (maxCnta < cnta[a[i]]) {
            vala = a[i];
            maxCnta = cnta[a[i]];
        }
        if (maxCnta1 < cnta[a[i]] && vala!= a[i]) {
            maxCnta1 = cnta[a[i]];
            vala1 = a[i];
        }
    }
    valb = 0;
    valb1 = 0;
    maxCntb = 0;
    maxCntb1 = 0;
    for (int i = 0; i < n; i++) {
        if (maxCntb < cntb[b[i]]) {
            valb = b[i];
            maxCntb = cntb[b[i]];
        }
        if (maxCntb1 < cntb[b[i]] && valb!= b[i]) {
            maxCntb1 = cntb[b[i]];
            valb1 = b[i];
        }
    }
    if (vala!= valb) {
        printf("0\n");
        return 0;
    }
    resa = 0;
    resb = 0;
    resa1 = 0;
    resb1 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]!= vala) {
            resa += 1;
        }
        if (a[i]!= vala1) {
            resa1 += 1;
        }
        if (b[i]!= valb) {
            resb += 1;
        }
        if (b[i]!= valb1) {
            resb1 += 1;
        }
    }
    printf("%d\n", min(resa + resb1, resa1 + resb));
    return 0;
}