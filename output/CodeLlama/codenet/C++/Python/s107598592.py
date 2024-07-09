#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){ 
  int N; cin >> N;
  vector<int> X(N);vector<int> Y(N);
   for(int i = 0; i < N; i++){ cin >> X[i] ; Y[i] = X[i]; }
  
  sort(Y.begin(),Y.end());
  
  int y = Y[N/2];
  for(int i = 0; i < N; i++){
    if( X[i] < Y[N/2]){print(Y[N/2]);}
    else{print(Y[N/2 - 1]);}  print()
}return 0;}