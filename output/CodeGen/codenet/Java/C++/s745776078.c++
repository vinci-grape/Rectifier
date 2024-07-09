#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;

int n,m,A[100][100],b[100],c;

int main() {
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> A[i][j];
		}
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
	}
	for(int i=0;i<n;i++) {
		c=0;
		for(int j=0;j<m;j++) {
			c+=A[i][j]*b[j];
		}
		cout << c << endl;
	}
	return 0;
}