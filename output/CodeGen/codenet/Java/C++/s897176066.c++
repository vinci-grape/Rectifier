#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  sort(A.begin(),A.end());
  for(int j=1;j<N;j++){
    if(A[j]==A[j-1]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}