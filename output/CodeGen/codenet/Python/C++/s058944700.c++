#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <memory>
#include <iomanip>
#include <functional>
#include <new>
#include <numeric>
#include <utility>
#include <sstream>
#include <initializer_list>
#include <iterator>
#include <cassert>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
#include <regex>

using namespace std;

#define DEBUG 0
#if DEBUG
#define debug(x) printf("%s - %d\n", __FUNCTION__, __LINE__)
#else
#define debug(x)
#endif

typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))
#define CL2d(a,b,x,y) memset(a, b, sizeof(a[0][0])*x*y)

/*global variables*/

/*global variables*/

void dump()
{
    //dump data
}

bool getInput()
{
    //get input
    return true;
}

void process()
{
    //process input
    int n, k;
    scanf("%d %d ", &n, &k);
    if (n > k)
    {
        int tmp = n % k;
        if (tmp >= k - tmp)
            printf("%d\n", k - tmp);
        else
            printf("%d\n", tmp);
    }
    else if (n < k)
    {
        if (n >= k - n)
            printf("%d\n", k - n);
        else
            printf("%d\n", n);
    }
    else
        printf("0\n");
}

int main()
{
    while (getInput())
    {

        process();

        /*output*/


        /*output*/
    }

    return 0;
}