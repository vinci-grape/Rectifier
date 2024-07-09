#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdint.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <valarray>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <bitset>
#include <iterator>
#include <functional>
#include <numeric>
#include <utility>
#include <valarray>
using namespace std;

int main(){
	int n,levels,sum,sum2,sum3;
	cin>>n>>levels;
	int arr[levels];
	int level2,level3;
	cin>>level2>>level3;
	int arr2[level3];
	for(int i=0;i<levels;i++)
		cin>>arr[i];
	for(int i=0;i<level3;i++)
		cin>>arr2[i];
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		sum2+=arr2[i];
		sum3+=arr[i]+arr2[i];
	}
	if(sum==n&&sum2==level2&&sum3==levels+level2)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
}