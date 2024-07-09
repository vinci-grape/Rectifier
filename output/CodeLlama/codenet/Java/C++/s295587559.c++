#include <iostream>
#include <regex>
using namespace std;

int main() {
  int n;
  cin >> n;
  int num[n];
  for (int i = 0; i < n; i++) {
	num[i] = i + 1;
  }
  int count;
  cin >> count;
  regex pt("(\\d+),(\\d+)");
  int line[2];
  for (int i = 0; i < count; i++) {
	string next;
	cin >> next;
	for (int j = 0; j < 2; j++) {
	  smatch matcher;
	  regex_match(next, matcher, pt);
	  line[j] = stoi(matcher[j + 1]) - 1;
	}
	int change = num[line[0]];
	num[line[0]] = num[line[1]];
	num[line[1]] = change;
  }
  for (int i = 0; i < n; i++) {
	cout << num[i] << endl;
  }
}