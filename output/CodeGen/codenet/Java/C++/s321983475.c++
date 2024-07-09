#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int w,a,b;
    scanf("%d%d%d",&w,&a,&b);
    int answer = max(a,b)-min(a,b) -w;
    if(answer < 0){
        cout<<0;
    }else{
        cout<<answer;
    }
    return 0;
}