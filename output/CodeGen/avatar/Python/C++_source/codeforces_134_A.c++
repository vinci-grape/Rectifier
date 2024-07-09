#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAXN 100

int w[MAXN], x, n;
int d[MAXN];

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    sort(w, w + n);
    int i = 0;
    while (i < n && w[i] == x) {
        d[i] = 1;
        i++;
    }
    if (i == n) {
        cout << "0" << endl;
        return 0;
    }
    int j = i;
    while (j < n && w[j] == w[i]) {
        j++;
    }
    int k = j;
    while (k < n && w[k] == w[i]) {
        k++;
    }
    int l = k;
    while (l < n && w[l] == w[i]) {
        l++;
    }
    int m = l;
    while (m < n && w[m] == w[i]) {
        m++;
    }
    int n = m;
    while (n < n && w[n] == w[i]) {
        n++;
    }
    int o = n;
    while (o < n && w[o] == w[i]) {
        o++;
    }
    int p = o;
    while (p < n && w[p] == w[i]) {
        p++;
    }
    int q = p;
    while (q < n && w[q] == w[i]) {
        q++;
    }
    int r = q;
    while (r < n && w[r] == w[i]) {
        r++;
    }
    int s = r;
    while (s < n && w[s] == w[i]) {
        s++;
    }
    int t = s;
    while (t < n && w[t] == w[i]) {
        t++;
    }
    int u = t;
    while (u < n && w[u] == w[i]) {
        u++;
    }
    int v = u;
    while (v < n && w[v] == w[i]) {
        v++;
    }
    int w = v;
    while (w < n && w[w] == w[i]) {
        w++;
    }
    int x = w;
    while (x < n && w[x] == w[i]) {
        x++;
    }
    int y = x;
    while (y < n && w[y] == w[i]) {
        y++;
    }
    int z = y;
    while (z < n && w[z] == w[i]) {
        z++;
    }
    int a = z;
    while (a < n && w[a] == w[i]) {
        a++;
    }
    int b = a;
    while (b < n && w[b] == w[i]) {
        b++;
    }
    int c = b;
    while (c < n && w[c] == w[i]) {
        c++;
    }
    int d = c;
    while (d < n && w[d] == w[i]) {
        d++;
    }
    int e = d;
    while (e < n && w[e] == w[i]) {
        e++;
    }
    int f = e;
    while (f < n && w[f] == w[i]) {
        f++;
    }
    int g = f;
    while (g < n && w[g] == w[i]) {
        g++;
    }
    int h = g;
    while (h < n && w[h] == w[i]) {
        h++;
    }
    int i = h;
    while (i < n && w[i] == w[i]) {
        i++;
    }
    int j = i;
    while (j < n && w[j] == w[i]) {
        j++;
    }
    int k = j;
    while (k < n && w[k] == w[i]) {
        k++;
    }
    int l = k;
    while (l < n && w[l] == w[i]) {
        l++;
    }
    int m = l;
    while (m < n && w[m] == w[i]) {
        m++;
    }
    int n = m;
    while (n < n && w[n] == w[i]) {
        n++;
    }
    int o = n;
    while (o < n && w[o] == w[i]) {
        o++;
    }
    int p = o;
    while (p < n && w[p] == w[i]) {
        p++;
    }
    int q = p;
    while (q < n && w[q] == w[i]) {
        q++;
    }
    int r = q;
    while (r < n && w[r] == w[i]) {
        r++;
    }
    int s = r;
    while (s < n && w[s] == w[i]) {
        s++;
    }
    int t = s;
    while (t < n && w[t] == w[i]) {
        t++;
    }
    int u = t;
    while (u < n && w[u] == w[i]) {
        u++;
    }
    int v = u;
    while (v < n && w[v] == w[i]) {
        v++;
    }
    int w = v;
    while (w < n && w[w] == w[i]) {
        w++;
    }
    int x = w;
    while (x < n && w[x] == w[i]) {
        x++;
    }
    int y = x;
    while (y < n && w[y] == w[i]) {
        y++;
    }
    int z = y;
    while (z < n && w[z] == w[i]) {
        z++;
    }
    int a = z;
    while (a < n && w[a] == w[i]) {
        a++;
    }
    int b = a;
    while (b < n && w[b] == w[i]) {
        b++;
    }
    int c = b;
    while (c < n && w[c] == w[i]) {
        c++;
    }
    int d = c;
    while (d < n && w[d] == w[i]) {
        d++;
    }
    int e = d;
    while (e < n && w[e] == w[i]) {
        e++;
    }
    int f = e;
    while (f < n && w[f] == w[i]) {
        f++;
    }
    int g = f;
    while (g < n && w[g] == w[i]) {
        g++;
    }
    int h = g;
    while (h < n && w[h] == w[i]) {
        h++;
    }
    int i = h;
    while (i < n && w[i] == w[i]) {
        i++;
    }
    int j = i;
    while (j < n && w[j] == w[i]) {
        j++;
    }
    int k = j;
    while (k < n && w[k] == w[i])