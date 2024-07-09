#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;
typedef long long LL;
const int MAXN = 2*1e5+10;
int a[MAXN],n,L[MAXN/2],R[MAXN/2];
LL merge(int left,int mid,int right){
    int i,j,k;
    LL cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for(i = 0; i < n1; ++i)	L[i] = a[left+i];
    for(i = 0; i < n2; ++i)	R[i] = a[mid+i];
    L[n1] = R[n2] = INF;
    i = j = 0;
    for(k = left; k < right; ++k){
        if(L[i] <= R[j]) a[k] = L[i++];
        else{
            a[k] = R[j++];
            cnt += n1-i;
        }
    }
    return cnt;
}
LL mergesort(int left,int right){
    int mid;
    LL v1,v2,v3;
    if(left + 1 < right){
        mid = (left+right)/2;
        v1 = mergesort(left,mid);
        v2 = mergesort(mid,right);
        v3 = merge(left,mid,right);
        return v1+v2+v3;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i = 0; i < n; ++i) cin>>a[i];
    LL ans = mergesort(0,n);
    cout<<ans<<'\n';
    return 0;
}