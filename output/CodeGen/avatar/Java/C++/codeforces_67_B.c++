#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <ctime>
#include <cassert>
using namespace std;

#define DEBUG
#define pb push_back
#define mp make_pair
#define clr clear()
#define sz size()
#define pii pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define lson l, m, rt
#define rson m+1, r, rt
#define mid ((l+r)>>1)
#define lc (o << 1)
#define rc (o << 1|1)
#define lowbit(x) (x&-x)
#define debug(x) cout << #x << " = " << x << endl
#define debugv(x) {cout << #x << " = ";for(int z=0;z<x.sz;z++)cout << x.x[z] <<'';cout << endl;}
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define mk make_pair
#define pii pair<ll,ll>
#define pdd pair<ld,ld>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define vfl vector<float>
#define vs vector<string>
#define vll vector<ll>
#define mii map<ll,ll>
#define mib map<ll,bool>
#define mss map<string,string>
#define mis map<int,string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvd vector<vd>
#define vvfl vector<vfl>
#define vvs vector<vs>
#define vvll vector<vll>
#define ii pair<ll,ll>
#define iii pair<ll, pair<ll,ll> >
#define mih map<ll,int>
#define vii vector<ii>
#define vvi vector<vii>
#define vvvi vector<vvvi>
#define debug(x) cout << #x << " = " << x << endl
#define debugv(x) {cout << #x << " = ";for(int z=0;z<x.sz;z++)cout << x.x[z] <<'';cout << endl;}
#define pll pair<ll,ll>
#define pdd pair<ld,ld>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define vfl vector<float>
#define vs vector<string>
#define vll vector<ll>
#define mii map<ll,ll>
#define mib map<ll,bool>
#define mss map<string,string>
#define mis map<int,string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvd vector<vd>
#define vvfl vector<vfl>
#define vvs vector<vs>
#define vvll vector<vll>
#define ii pair<ll,ll>
#define iii pair<ll, pair<ll,ll> >
#define mih map<ll,int>
#define vii vector<ii>
#define vvi vector<vii>
#define vvvi vector<vvvi>
#define debug(x) cout << #x << " = " << x << endl
#define debugv(x) {cout << #x << " = ";for(int z=0;z<x.sz;z++)cout << x.x[z] <<'';cout << endl;}
#define pll pair<ll,ll>
#define pdd pair<ld,ld>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define vfl vector<float>
#define vs vector<string>
#define vll vector<ll>
#define mii map<ll,ll>
#define mib map<ll,bool>
#define mss map<string,string>
#define mis map<int,string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvd vector<vd>
#define vvfl vector<vfl>
#define vvs vector<vs>
#define vvll vector<vll>
#define ii pair<ll,ll>
#define iii pair<ll, pair<ll,ll> >
#define mih map<ll,int>
#define vii vector<ii>
#define vvi vector<vii>
#define vvvi vector<vvvi>
#define debug(x) cout << #x << " = " << x << endl
#define debugv(x) {cout << #x << " = ";for(int z=0;z<x.sz;z++)cout << x.x[z] <<'';cout << endl;}
#define pll pair<ll,ll>
#define pdd pair<ld,ld>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vd vector<