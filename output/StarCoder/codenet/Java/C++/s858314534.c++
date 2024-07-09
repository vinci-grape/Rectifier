#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <cfloat>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int A, B, T;
	scanf("%d %d %d", &A, &B, &T);
	printf("%d", (T / A) * B);
	return 0;
}