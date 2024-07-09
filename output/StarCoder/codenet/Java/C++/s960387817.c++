#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> set;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		set.insert(v[i]);
	}
	cout << set.size() << endl;
	return 0;
}