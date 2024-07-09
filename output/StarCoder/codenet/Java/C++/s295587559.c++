#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> num(n);
  for (int i = 0; i < n; i++) {
	num[i] = i + 1;
  }
  int count;
  cin >> count;
  string line;
  cin >> line;
  regex pt("(\\d+),(\\d+)");
  for (int i = 0; i < count; i++) {
	smatch match;
	if (regex_match(line, match, pt)) {
	  int change = num[stoi(match[1]) - 1];
	  num[stoi(match[1]) - 1] = num[stoi(match[2]) - 1];
	  num[stoi(match[2]) - 1] = change;
	}
	cin >> line;
  }
  for (int i = 0; i < n; i++) {
	cout << num[i] << endl;
  }
  return 0;
}