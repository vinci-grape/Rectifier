#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rl(i,a,b) for(ll i=a;i>=b;i--)
#define pi 3.14159265358979323846
#define sz(x) (int)x.size()
#define endl "\n"
#define mod 1000000007
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<"="<<x<<", "<<#y<<"="<<y<<endl
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvpii vector<vpii>
#define mii map<int, int>
#define minHeap priority_queue<int>
#define minHeapLL priority_queue<ll>
#define maxHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeapLL priority_queue<ll, vector<ll>, greater<ll>>
#define setMii map<int, set<int>>
#define lowbit(x) (x&-x)
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set2 = tree<pair<T, string>, null_type, less<pair<T, string>>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randint(int lb, int ub)
{
    return uniform_int_distribution<int>(lb, ub)(rng);
}

int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[0] << " " << (any_of(a.begin() + 1, a.end(), [&](int x) { return x % a[0] == 0; }) ? -1 : 1) << endl;
    return 0;
}