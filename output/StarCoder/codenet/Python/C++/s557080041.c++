#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N == 0) {
    cout << "Yes" << endl;
  } else {
    string N_str = to_string(N);
    int sum = 0;
    for (int i = 0; i < N_str.size(); i++) {
      sum += N_str[i] - '0';
    }
    if (sum % 9 == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}