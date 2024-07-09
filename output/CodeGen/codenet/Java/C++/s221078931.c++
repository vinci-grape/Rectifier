#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class IntegralRect {
public:
	int height;
	int width;
	int diagonal() {
		if (height >= width) {
			return INT_MAX;
		}
		return height * height + width * width;
	}
	IntegralRect(int h, int w) {
		height = h;
		width = w;
	}
	bool operator<(const IntegralRect& o) const {
		return diagonal() > o.diagonal();
	}
};

int main() {
	int n;
	cin >> n;
	IntegralRect rects[n];
	for (int i = 0; i < n; ++i) {
		cin >> rects[i].height >> rects[i].width;
	}
	sort(rects, rects + n);
	for (int i = 0; i < n; ++i) {
		cout << rects[i].height << " " << rects[i].width << endl;
	}
	return 0;
}