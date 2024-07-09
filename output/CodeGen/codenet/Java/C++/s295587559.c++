#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
	cin >> arr[i];
  }
  int count;
  cin >> count;
  int line[2];
  for (int i = 0; i < count; i++) {
	for (int j = 0; j < 2; j++) {
	  cin >> line[j];
	}
	int change = arr[line[0]];
	arr[line[0]] = arr[line[1]];
	arr[line[1]] = change;
  }
  for (int i = 0; i < n; i++) {
	cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}