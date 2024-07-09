#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int po[n];
for(int i=0;i<n;i++){
    cin>>po[i];
    m-=po[i];
}
sort(po,po+n);
cout<<n<<m/po[0]<<endl;
return 0;
}