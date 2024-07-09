#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main()
{
    while(true){
        char str[200000];
        scanf("%s", str);
        if(strlen(str) == 1 && str[0] == '0')break;
        int ans = 0;
        for(int i = 0; i < strlen(str); i++)
            ans += str[i]-'0';
        printf("%d\n", ans);
    }
    return 0;
}