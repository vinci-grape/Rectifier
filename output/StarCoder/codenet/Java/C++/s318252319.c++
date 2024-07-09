#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 3)
        cout << "bon";
    else if (n == 0 || n == 1 || n == 6 || n == 8)
        cout << "pon";
    else
        cout << "hon";
    return 0;
}