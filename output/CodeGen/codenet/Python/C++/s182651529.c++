#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int score[N];
  for (int i = 0; i < N; i++) {
    cin >> score[i];
  }
  int mae = 0;
  int usiro = K;
  for (int i = 0; i < N - K; i++) {
    if (score[mae] < score[usiro]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    mae++;
    usiro++;
  }
  return 0;
}