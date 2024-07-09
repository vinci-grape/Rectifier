#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cctype>
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,k,x,y;
  cin>>n>>k>>x>>y;
  int sum=0;
  for(int i=1;i<=n;i++){
    if(i>k)sum+=y;
    else sum+=x;
  }
  cout<<sum<<endl;

  return 0;
}