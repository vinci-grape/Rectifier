#include<bits/stdc++.h>
using namespace std;
#define pw printf
#define sc scanf
#define pb push_back
#define fill(arr,x) for(int i=0; i<30; i++) arr[i]+=Int(((1<<i)&x)!=0);
#define pow(a,pow) {long ans=1; while(pow>0){ if((pow&1)==1) ans*=a; a*=a; pow>>=1; } return ans;}
#define getpow(x) {int pow=x; pw("B %d\n", pow); pw.flush(); sc("%d", &x); if(x==1){ pow*=x; while(true){ pw("B %d\n", pow); pw.flush(); sc("%d", &x); if(x==0) return pow/x; pow*=x; } } else return 1; }
#define Int(x) (x?1:0)
#define linearsieve(x) {least=new int[x+1]; prime=new TreeSet<Integer>(); for(int i=2; i<=x; i++){ if(least[i]==0){ least[i]=i; prime.add(i); } for(int y :prime) { if(i*y<=x) least[i*y]=y; else break; } } }
#define printArr(arr) { for (int i = 0; i < arr.size()-1; i++) pw("%d ", arr[i]); pw("%d\n", arr[arr.size()-1]); }
#define printArr(arr) { for (int i = 0; i < arr.length-1; i++) pw("%d ", arr[i]); pw("%d\n", arr[arr.length-1]); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%c ", arr[i]); pw("\n"); }
#define printArr(list) { for (int i = 0; i < list.size(); i++) pw("%d ", list.get(i)); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define printArr(arr) { for (int i = 0; i < arr.length; i++) pw("%d ", arr[i]); pw("\n"); }
#define print