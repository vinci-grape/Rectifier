#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;


int main()
{
	int a, b; cin >> a >> b;
	string bstr = to_string(b);
	int num = a * pow(10, bstr.length()) + b;

	int i;
	for (i = 1; i <= 100100; i++)
	{
		if (i * i == num) break;
	}

	if (i > 100100) print("No")
	else: print("Yes")
}