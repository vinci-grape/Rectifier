#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int w, n;
	cin >> w >> n;
	int values[w];
	for (int i = 0; i < w; i++) {
		values[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		int x = 0;
		string str;
		cin >> str;
		string ab[2];
		ab[0] = str.substr(0, str.find(','));
		ab[1] = str.substr(str.find(',') + 1);
		int a = stoi(ab[0]) - 1;
		int b = stoi(ab[1]) - 1;
		x = values[a];
		values[a] = values[b];
		values[b] = x;
	}
	for (int i = 0; i < w; i++) {
		cout << values[i] << endl;
	}
	return 0;
}