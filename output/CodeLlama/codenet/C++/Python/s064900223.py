#include <iostream>
#include <vector>
using namespace std;
int main(){
int i,n,ans;
cin >> n;
vector <int> p(n);
for(i=0;i<n;i++){
cin >> p[i];
}
ans = 0;
for(i=0;i<n-1;i++){
if(p[i]==i+1){
  p[i+1] = p[i];
ans +=1;
}
}
if(p[n-1] == n){
ans +=1;
}
cout << ans <<endl;
}