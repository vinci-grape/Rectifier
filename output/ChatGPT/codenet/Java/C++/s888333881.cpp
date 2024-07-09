#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <cstring>
#include <iomanip>
#include <cassert>
#include <bitset>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ALL(v) (v).begin(), (v).end()
#define SIZE(v) (int)(v).size()
#define VEC2(type, name, size1, size2) vector<vector<type>>(size1, vector<type>(size2, name))
#define VEC3(type, name, size1, size2, size3) vector<vector<vector<type>>>(size1, vector<vector<type>>(size2, vector<type>(size3, name)))
#define INT(...) int __VA_ARGS__; IN(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__; IN(__VA_ARGS__)
#define STR(...) string __VA_ARGS__; IN(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__; IN(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__; IN(__VA_ARGS__)
#define LD(...) long double __VA_ARGS__; IN(__VA_ARGS__)
#define VECS(type, name, size) vector<vector<type>> name(size); REP(i, size) cin >> name[i]
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl
#define OK(n) cout << ((n) ? "OK" : "NG") << endl
#define Ok(n) cout << ((n) ? "Ok" : "Ng") << endl
#define sort_all(v) sort(ALL(v))
#define sort_rev(v) sort(ALL(v), greater<>())
#define uni(v) v.erase(unique(ALL(v)), v.end())
#define IN(type, ...) type __VA_ARGS__; in(__VA_ARGS__)
#define SCAN(type, n, ...) vector<type> __VA_ARGS__(n); scan(__VA_ARGS__)
#define SCAN_LINE(type, n, ...) vector<type> __VA_ARGS__(n); scan_line(__VA_ARGS__)
#define VEC(type, name, size) vector<type> name(size); REP(i, size) cin >> name[i]
#define VEC1(type, name, size) vector<type> name(size); REP(i, size) cin >> name[i], name[i]--
#define VEC_SCAN(type, name, size) vector<type> name(size); REP(i, size) scan(name[i])
#define VEC_SCAN_LINE(type, name, size) vector<type> name(size); REP(i, size) scan_line(name[i])
#define VEC_VEC(type, name, size1, size2) vector<vector<type>> name(size1, vector<type>(size2)); REP(i, size1) REP(j, size2) cin >> name[i][j]
#define VEC_VEC_SCAN(type, name, size1, size2) vector<vector<type>> name(size1, vector<type>(size2)); REP(i, size1) REP(j, size2) scan(name[i][j])
#define VEC_VEC_SCAN_LINE(type, name, size1, size2) vector<vector<type>> name(size1, vector<type>(size2)); REP(i, size1) REP(j, size2) scan_line(name[i][j])
#define DUMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#define DUMPS(v) dump(#v, v)
#define dump(...) cerr << "【" << #__VA_ARGS__ << "】: ", dump_func(__VA_ARGS__)
template<typename Arg1>void dump_func(Arg1&& arg1) {cerr << arg1 << endl;}
template<typename Arg1,typename... Args>void dump_func(Arg1&& arg1, Args&&... args){cerr<<arg1<<", ";dump_func(args...);}
template<typename T>ostream& operator<<(ostream& os, const vector<T>& v) {REP(i, SIZE(v)) {if (i) os << " "; os << v[i];} return os;}
template<typename T>ostream& operator<<(ostream& os, const vector<vector<T>>& v) {REP(i, SIZE(v)) {if (i) os << endl; os << v[i];} return os;}
template<typename T>ostream& operator<<(ostream& os, const set<T>& s) {for (auto itr = s.begin(); itr != s.end(); ++itr) {if (itr != s.begin()) os << " "; os << *itr;} return os;}
template<typename T>ostream& operator<<(ostream& os, const multiset<T>& s) {for (auto itr = s.begin(); itr != s.end(); ++itr) {if (itr != s.begin()) os << " "; os << *itr;} return os;}
template<typename T, typename U>ostream& operator<<(ostream& os, const map<T, U>& m) {for (auto itr = m.begin(); itr != m.end(); ++itr) {if (itr != m.begin()) os << endl; os << itr->first << " " << itr->second;} return os;}
template<typename T, typename U>ostream& operator<<(ostream& os, const pair<T, U>& p) {os << p.first << " " << p.second; return os;}
void* get_tuple_index();
template <typename T, typename... Args>
void* get_tuple_index(tuple<T, Args...>*) { return nullptr; }
template <typename T, typename U, typename... Args>
void* get_tuple_index(tuple<T, U, Args...>*) { return get_tuple_index((tuple<U, Args...>*)nullptr); }
template <typename T, typename... Args>
ostream& operator<<(ostream& os, const tuple<T, Args...>& t) {
    os << get<0>(t); os << " "; os << t; return os;
}
template <typename T>void scan(T& t) { cin >> t; }
template <typename T>void scan_line(T& t) { cin.ignore(); getline(cin, t); }
template <typename T, typename... Args>void scan(T& t, Args&... args) { cin >> t; scan(args...); }
template <typename T>void scan_line(T& t, Args&... args) { cin.ignore(); getline(cin, t); scan_line(args...); }
template <typename T>void scan(vector<T>& v) { for (auto&& i : v) cin >> i; }
template <typename T, typename... Args>void scan(vector<T>& v, Args&... args) { for (auto&& i : v) cin >> i; scan(args...); }
template <typename T>void scan_line(vector<T>& v, Args&... args) { for (auto&& i : v) cin >> i; scan_line(args...); }
template <typename T>void scan(vector<vector<T>>& v) { for (auto&& i : v) scan(i); }
template <typename T, typename... Args>void scan(vector<vector<T>>& v, Args&... args) { for (auto&& i : v) scan(i);