#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

class PointCard {
public:
	int N, M;
	vector<int> shortage;

	PointCard(int n, int m) {
		N = n;
		M = m;
		shortage = vector<int>(M, 0);
	}

	int getAnswer() {
		sort(shortage.begin(), shortage.end());
		int ans = 0;
		for (int i = 0; i < shortage.size() - 1; i++) {
			ans += shortage[i];
		}
		return ans;
	}
};

int main() {
	int n, m;
	cin >> n >> m;
	PointCard p(n, m);
	cout << p.getAnswer() << endl;
	return 0;
}