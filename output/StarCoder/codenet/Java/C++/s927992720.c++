#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <cctype>
#include <climits>
using namespace std;

int main()
{
    while(true){
        int a,b;
        char op;
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?') break;
        if(op=='+') printf("%d\n",a+b);
        if(op=='-') printf("%d\n",a-b);
        if(op=='*') printf("%d\n",a*b);
        if(op=='/') printf("%d\n",a/b);
    }
    return 0;
}