#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define sz(x) ((int)(x).size())
#define rep(i,a,b) for (int i = a; i < (b); ++i)
#define repr(i,a,b) for (int i = (b)-1; i >= a; --i)
#define tr(it, x) for (auto it = (x).begin(); it!= (x).end(); it++)
#define trr(it, x) for (auto it = (x).rbegin(); it!= (x).rend(); it++)
#define max(x, y) (x) > (y)? (x) : (y)
#define min(x, y) (x) < (y)? (x) : (y)
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pii>
#define vll vector<pll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvl vector<vector<ll>>
#define vvc vector<vector<char>>
#define vvs vector<string>
#define vvc vector<vector<char>>
#define vvs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvl vector<vector<ll>>
#define vvd vector<vector<double>>
#define vvm vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvd vector<vector<double>>
#define vvm vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvvll vector<vector<vector<ll>>>
#define vvvl vector<vector<vector<ll>>>
#define vvvvll vector<vector<vector<vector<ll>>>>
#define vvvvl vector<vector<vector<vector<ll>>>>
#define vvvvvl vector<vector<vector<vector<vector<ll>>>>
#define vvvvvll vector<vector<vector<vector<vector<vector<ll>>>>>
#define vvvvvl vector<vector<vector<vector<vector<vector<ll>>>>>
#define vvvvvvl vector<vector<vector<vector<vector<vector<vector<ll>>>>>>
#define vvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>
#define vvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>
#define vvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>>
#define vvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>>
#define vvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvvvll vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<ll>>>>>>>>
#define vvvvvvvvvvvvvvvvvl vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<