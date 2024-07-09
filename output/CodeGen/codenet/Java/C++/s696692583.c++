#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Main {
public:
	Main() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> a[i][j];
			}
		}
	}
	void tr(const char* s, const int* a) {
		cout << s << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
	}
	void tr(const int* a) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
	}
	void tr(const int* a, const int* b) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c, const int* d) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
		cout << ": " << d[0] << ", " << d[1] << ", " << d[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c, const int* d, const int* e) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
		cout << ": " << d[0] << ", " << d[1] << ", " << d[2] << endl;
		cout << ": " << e[0] << ", " << e[1] << ", " << e[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c, const int* d, const int* e, const int* f) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
		cout << ": " << d[0] << ", " << d[1] << ", " << d[2] << endl;
		cout << ": " << e[0] << ", " << e[1] << ", " << e[2] << endl;
		cout << ": " << f[0] << ", " << f[1] << ", " << f[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c, const int* d, const int* e, const int* f, const int* g) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
		cout << ": " << d[0] << ", " << d[1] << ", " << d[2] << endl;
		cout << ": " << e[0] << ", " << e[1] << ", " << e[2] << endl;
		cout << ": " << f[0] << ", " << f[1] << ", " << f[2] << endl;
		cout << ": " << g[0] << ", " << g[1] << ", " << g[2] << endl;
	}
	void tr(const int* a, const int* b, const int* c, const int* d, const int* e, const int* f, const int* g, const int* h) {
		cout << ": " << a[0] << ", " << a[1] << ", " << a[2] << endl;
		cout << ": " << b[0] << ", " << b[1] << ", " << b[2] << endl;
		cout << ": " << c[0] << ", " << c[1] << ", " << c[2] << endl;
		cout << ": " << d[0] << ", " << d[1] << ", " << d[2] << endl;
		cout << ": " << e[0] << ", " << e[1] << ", " << e[2] << endl;
		cout << ": " << f[0] << ", " <<