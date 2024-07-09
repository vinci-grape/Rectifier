#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int w,a,b;
    cin>>w>>a>>b;
    cout<<max(a,b)-min(a,b)-w<<endl;
    return 0;
}