#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii1(a) int a; cin >> a;
#define is1(a) string a; cin >> a;
#define iia(a) vector<int> a; int n; cin >> n; a.resize(n); for(int i = 0; i < n; i++) cin >> a[i];
#define isa(a) vector<string> a; int n; cin >> n; a.resize(n); for(int i = 0; i < n; i++) cin >> a[i];
#define iil(a) vector<ll> a; int n; cin >> n; a.resize(n); for(int i = 0; i < n; i++) cin >> a[i];
#define iil1(a) ll a; cin >> a;
#define iil2(a, b) ll a, b; cin >> a >> b;
#define iil3(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define iil4(a, b, c, d) ll a, b, c, d; cin >> a >> b >> c >> d;
#define iil5(a, b, c, d, e) ll a, b, c, d, e; cin >> a >> b >> c >> d >> e;
#define iil6(a, b, c, d, e, f) ll a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
#define iil7(a, b, c, d, e, f, g) ll a, b, c, d, e, f, g; cin >> a >> b >> c >> d >> e >> f >> g;
#define iil8(a, b, c, d, e, f, g, h) ll a, b, c, d, e, f, g, h; cin >> a >> b >> c >> d >> e >> f >> g >> h;
#define iil9(a, b, c, d, e, f, g, h, i) ll a, b, c, d, e, f, g, h, i; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
#define iil10(a, b, c, d, e, f, g, h, i, j) ll a, b, c, d, e, f, g, h, i, j; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
#define iil11(a, b, c, d, e, f, g, h, i, j, k) ll a, b, c, d, e, f, g, h, i, j, k; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k;
#define iil12(a, b, c, d, e, f, g, h, i, j, k, l) ll a, b, c, d, e, f, g, h, i, j, k, l; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
#define iil13(a, b, c, d, e, f, g, h, i, j, k, l, m) ll a, b, c, d, e, f, g, h, i, j, k, l, m; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m;
#define iil14(a, b, c, d, e, f, g, h, i, j, k, l, m, n) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n;
#define iil15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o;
#define iil16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p;
#define iil17(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q;
#define iil18(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >> r;
#define iil19(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >> r >> s;
#define iil20(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >> r >> s >> t;
#define iil21(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u) ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >>