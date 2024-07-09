#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
using namespace std;
typedef long long LL;
const int maxn = 1000005;
int main()
{
    ios::sync_with_stdio(false);
    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
            cout<<"GREATER"<<endl;
        else if(a<b)
            cout<<"LESS"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
    return 0;
}