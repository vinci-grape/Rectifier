#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pdi pair<double,int>
#define pld pair<ll,double>
#define pldi pair<ll,int>
#define pldd pair<ll,double>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpdi vector<pdi>
#define vpld vector<pld>
#define vpldi vector<pldi>
#define vpldd vector<pldd>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvc vector<vc>
#define vvs vector<vs>
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vvpdi vector<vpdi>
#define vvpld vector<vpld>
#define vvpldi vector<vpldi>
#define vvpldd vector<vpldd>
#define umap unordered_map
#define uset unordered_set
#define umii unordered_map<int,int>
#define umll unordered_map<ll,ll>
#define umci unordered_map<char,int>
#define umss unordered_map<string,string>
#define umd unordered_map<double,double>
#define umdi unordered_map<double,int>
#define umid unordered_map<int,double>
#define umiiii unordered_map<int,umii>
#define ummii unordered_map<int,umii>
#define umiii unordered_map<int,umii>
#define ummiii unordered_map<int,umii>
#define ummiiii unordered_map<int,umii>
#define ummiiiii unordered_map<int,umii>
#define ummiiiiii unordered_map<int,umii>
#define ummiiiiiii unordered_map<int,umii>
#define ummiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii unordered_map<int,umii>
#define ummiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii