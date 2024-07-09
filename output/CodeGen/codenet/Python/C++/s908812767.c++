#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <cassert>
#include <functional>
#include <numeric>
#include <utility>
#include <bitset>
#include <list>
#include <stack>
#include <deque>
#include <complex>
#include <functional>
#include <valarray>
#include <cstdint>
#include <unordered_map>
#include <unordered_set>
#include <array>
using namespace std;

#define DEBUG //comment this line to pull out print statements
#ifdef DEBUG
#define TAB '\t'
#define debug(a, end) cout << #a << ": " << a << end
#define dbg(end) end
#else
#define debug(a, end)
#define dbg(end)
#endif

typedef vector<int> vi;

#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())
#define SORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)
#define CL(a,b) memset(a,b,sizeof(a))
#define CL2d(a,b,x,y) memset(a, b, sizeof(a[0][0])*x*y)

/*global variables*/
vector<vector<int> > V;
/*global variables*/

void dump()
{
    //dump data
}

bool getInput()
{
    //get input
    int n;
    scanf("%d ", &n);
    if (n == 0) return false;
    V.resize(n);
    REP(i, n)
    {
        int u, v, w;
        scanf("%d %d %d ", &u, &v, &w);
        V[u-1].push_back(make_pair(v-1, w));
        V[v-1].push_back(make_pair(u-1, w));
    }
    return true;
}

void process()
{
    //process input
    int n = V.size();
    int i = 0;
    while (i < n)
    {
        int j = i;
        while (j < n)
        {
            if (V[i][j] == V[i][j+1])
            {
                V[i].erase(V[i].begin()+j);
                V[i].erase(V[i].begin()+j+1);
                j--;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < V[i].size(); ++j)
        {
            printf("%d ", V[i][j].first+1);
        }
        printf("\n");
    }
}

int main()
{
    while (getInput())
    {

        process();

        /*CLEAR GLOBAL VARIABLES!*/

        /*CLEAR GLOBAL VARIABLES!*/
    }

    return 0;
}