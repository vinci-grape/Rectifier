#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
  int N;
  int K;
  long Q;
  int A;
  int B;
  long C;
  double min = 9999999;
  long ans = 0;

  cin >> N;

  string s;
  cin >> s;

  bool flag = false;
  int ans = 0;
  int hen = 0;
  int sha = 0;
  int dot = 0;
  int temp = 0;
  bool first = true;
  for (int i = 0; i < N; i++) {
    if(s[i] == '#'){
      first = false;
      if(sha <= dot){
        ans += sha;
        sha = 0;
        dot = 0;
        first = true;
      }else{
//            temp += dot;
      }

      sha++;
    }else{
//        System.out.println(first);
//        if(first == false) {

      dot++;
//        }
    }
  }

  if(sha <= dot){
    ans += sha;
    dot = 0;
  }else{
//            temp += dot;
  }


//    System.out.println(dot);

  cout << ans + dot << endl;
}