#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <ctype.h>
#include <string.h>
#include <set>
#include <map>
#include <queue>
#include <iomanip>
#include <vector>
#include <list>
#include <sstream>
#include <stack>
#include <iterator>
#include <cassert>
#include <fstream>
#include <numeric>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
	int T=sc.nextInt();
	while(T--) {
		int W=sc.nextInt();
		int H=sc.nextInt();
		char[][] map=new char[H][W];
		for(int h=0;h<H;h++) {
			map[h]=sc.next().toCharArray();
		}
		BigInteger[][] dp=new BigInteger[H][W];
		for(int h=0;h<H;h++)for(int w=0;w<W;w++) {
			BigInteger hprev=BigInteger.ZERO;
			if(h>=1) {
				hprev=dp[h-1][w];
			}
			BigInteger wprev=BigInteger.ZERO;
			if(w>=1) {
				wprev=dp[h][w-1];
			}
			if(Character.isDigit(map[h][w])) {
				BigInteger max;
				if(hprev.compareTo(wprev)>0) {
					max=hprev;
				} else {
					max=wprev;
				}
				dp[h][w]=max.multiply(BigInteger.TEN).add(new BigInteger(map[h][w]+""));
			} else {
				dp[h][w]=BigInteger.ZERO;
			}
		}
		BigInteger max=BigInteger.ZERO;
		for(int h=0;h<H;h++)for(int w=0;w<W;w++) {
			if(dp[h][w].compareTo(max)>0)max=dp[h][w];
		}
		ln(max);
	}
	return 0;
}