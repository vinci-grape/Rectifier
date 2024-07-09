#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;
  if (N == 0) {
    cout << "Yes";
  } else {
    string N_str = to_string(N);
    int N_int = 0;
    for (int i = 0; i < N_str.length(); i++) {
      N_int += (N_str[i] - '0');
    }
    if (N_int % 9 == 0) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
  return 0;
}