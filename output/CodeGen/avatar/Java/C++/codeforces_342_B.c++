#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

#define ll long long
#define mem(Arr,x) memset(Arr,x,sizeof(Arr))
#define RG register
#define IL inline

const int maxN=1010;
const int maxM=maxN*maxN*2;
const int inf=2147483647;

class Edge
{
public:
	int u,v,w;
};

class Graph
{
public:
	int n,m;
	int cnt;
	Edge E[maxM];
	int Head[maxN],Next[maxM];
	int Depth[maxN],Dph[maxN];
	int Que[maxN];
	int Dist[maxN];
	int Stack[maxN];
	int top,Stk[maxN];
	int Ans[maxN];
	int Ans2[maxN];
	int Ans3[maxN];
	int Ans4[maxN];
	int Ans5[maxN];
	int Ans6[maxN];
	int Ans7[maxN];
	int Ans8[maxN];
	int Ans9[maxN];
	int Ans10[maxN];
	int Ans11[maxN];
	int Ans12[maxN];
	int Ans13[maxN];
	int Ans14[maxN];
	int Ans15[maxN];
	int Ans16[maxN];
	int Ans17[maxN];
	int Ans18[maxN];
	int Ans19[maxN];
	int Ans20[maxN];
	int Ans21[maxN];
	int Ans22[maxN];
	int Ans23[maxN];
	int Ans24[maxN];
	int Ans25[maxN];
	int Ans26[maxN];
	int Ans27[maxN];
	int Ans28[maxN];
	int Ans29[maxN];
	int Ans30[maxN];
	int Ans31[maxN];
	int Ans32[maxN];
	int Ans33[maxN];
	int Ans34[maxN];
	int Ans35[maxN];
	int Ans36[maxN];
	int Ans37[maxN];
	int Ans38[maxN];
	int Ans39[maxN];
	int Ans40[maxN];
	int Ans41[maxN];
	int Ans42[maxN];
	int Ans43[maxN];
	int Ans44[maxN];
	int Ans45[maxN];
	int Ans46[maxN];
	int Ans47[maxN];
	int Ans48[maxN];
	int Ans49[maxN];
	int Ans50[maxN];
	int Ans51[maxN];
	int Ans52[maxN];
	int Ans53[maxN];
	int Ans54[maxN];
	int Ans55[maxN];
	int Ans56[maxN];
	int Ans57[maxN];
	int Ans58[maxN];
	int Ans59[maxN];
	int Ans60[maxN];
	int Ans61[maxN];
	int Ans62[maxN];
	int Ans63[maxN];
	int Ans64[maxN];
	int Ans65[maxN];
	int Ans66[maxN];
	int Ans67[maxN];
	int Ans68[maxN];
	int Ans69[maxN];
	int Ans70[maxN];
	int Ans71[maxN];
	int Ans72[maxN];
	int Ans73[maxN];
	int Ans74[maxN];
	int Ans75[maxN];
	int Ans76[maxN];
	int Ans77[maxN];
	int Ans78[maxN];
	int Ans79[maxN];
	int Ans80[maxN];
	int Ans81[maxN];
	int Ans82[maxN];
	int Ans83[maxN];
	int Ans84[maxN];
	int Ans85[maxN];
	int Ans86[maxN];
	int Ans87[maxN];
	int Ans88[maxN];
	int Ans89[maxN];
	int Ans90[maxN];
	int Ans91[maxN];
	int Ans92[maxN];
	int Ans93[maxN];
	int Ans94[maxN];
	int Ans95[maxN];
	int Ans96[maxN];
	int Ans97[maxN];
	int Ans98[maxN];
	int Ans99[maxN];
	int Ans100[maxN];
	int Ans101[maxN];
};

Graph G;

int main(){
	int T;
	scanf("%d",&T);
	while (T--){
		scanf("%d%d",&G.n,&G.m);
		G.cnt=0;
		for (int i=1;i<=G.n;i++) G.Head[i]=G.cnt,G.Depth[i]=0,G.Dist[i]=inf;
		for (int i=1;i<=G.m;i++) scanf("%d%d%d",&G.E[i].u,&G.E[i].v,&G.E[i].w);
		for (int i=1;i<=G.m;i++) G.Next[i]=G.Head[G.E[i].u],G.Head[G.E[i].u]=i;
		for (int i=1;i<=G.n;i++) G.Dph[i]=0;
		for (int i=1;i<=G.n;i++) G.Que[i]=i;
		for (int i=1;i<=G.n;i++) G.Ans[i]=0;
		for (int i=1;i<=G.n;i++) G.Ans2[i]=0;
		for (int i=1;i<=G.n;i++) G.Ans3[i]=0;
		for (int i=1;i<