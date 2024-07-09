#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define count_one(x) __builtin_popcountll(x)
#define parity(x) __builtin_parityll(x)
#define ctz(x) __builtin_ctzll(x)
#define clz(x) __builtin_clzll(x)
#define popcount(x) __builtin_popcountll(x)
#define isPowerOfTwo(x) (x!= 0) && (x & (x - 1)) == 0
#define isSquare(x) (isPowerOfTwo((x) & -x))
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define debug(x) cout << #x << " is " << x << endl
#define debug2(x, y) cout << #x << " is " << x << " and " << #y << " is " << y << endl
#define debug3(x, y, z) cout << #x << " is " << x << " and " << #y << " is " << y << " and " << #z << " is " << z << endl
#define debugarray(arr, n) for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl
#define debugarray2(arr, n, m) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) cout << arr[i][j] << " ";} cout << endl
#define debugarray3(arr, n, m, p) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) cout << arr[i][j][k] << " ";} cout << endl;} cout << endl
#define debugarray4(arr, n, m, p, q) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) cout << arr[i][j][k][l] << " ";} cout << endl;} cout << endl;} cout << endl
#define debugarray5(arr, n, m, p, q, r) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) {for (int x = 0; x < r; x++) cout << arr[i][j][k][l][x] << " ";} cout << endl;} cout << endl;} cout << endl;} cout << endl
#define debugarray6(arr, n, m, p, q, r, s) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) {for (int x = 0; x < r; x++) {for (int y = 0; y < s; y++) cout << arr[i][j][k][l][x][y] << " ";} cout << endl;} cout << endl;} cout << endl;} cout << endl;} cout << endl
#define debugarray7(arr, n, m, p, q, r, s, t) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) {for (int x = 0; x < r; x++) {for (int y = 0; y < s; y++) {for (int z = 0; z < t; z++) cout << arr[i][j][k][l][x][y][z] << " ";} cout << endl;} cout << endl;} cout << endl;} cout << endl;} cout << endl;} cout << endl
#define debugarray8(arr, n, m, p, q, r, s, t, u) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) {for (int x = 0; x < r; x++) {for (int y = 0; y < s; y++) {for (int z = 0; z < t; z++) {for (int a = 0; a < u; a++) cout << arr[i][j][k][l][x][y][z][a] << " ";} cout << endl;} cout << endl;} cout << endl;} cout << endl;} cout << endl;} cout << endl
#define debugarray9(arr, n, m, p, q, r, s, t, u, v) for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {for (int k = 0; k < p; k++) {for (int l = 0; l < q; l++) {for (int x =