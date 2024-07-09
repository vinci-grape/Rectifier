#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int black[n+2][n+2];
    for(int i=0;i<n+2;i++)
        for(int j=0;j<n+2;j++)
            black[i][j]=0;
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        for(int xx=x-1;xx<=x+1;xx++)
            for(int yy=y-1;yy<=y+1;yy++)
                black[xx][yy]++;
    }
    for(int i=0;i<n+2;i++)
        for(int j=0;j<n+2;j++)
            if(black[i][j]==9)
                printf("%d\n",i);
    return 0;
}