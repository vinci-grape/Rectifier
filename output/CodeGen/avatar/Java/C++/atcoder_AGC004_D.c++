#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdint>
#include <climits>
#include <cassert>
#include <cctype>
#include <ctime>

#define INF 0x3f3f3f3f
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
#define M_PI 3.14159265358979323846
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define MAX_V 10101
#define maxn 1010
#define lowbit(X) (X & (-X))
#define debug(args...) fprintf(stderr,args)
#define debug1(args...) fprintf(stderr,args)
#define debug2(args...) fprintf(stderr,args)
#define debug3(args...) fprintf(stderr,args)
#define debug4(args...) fprintf(stderr,args)
#define debug5(args...) fprintf(stderr,args)
#define debug6(args...) fprintf(stderr,args)
#define debug7(args...) fprintf(stderr,args)
#define debug8(args...) fprintf(stderr,args)
#define debug9(args...) fprintf(stderr,args)
#define debug10(args...) fprintf(stderr,args)
#define debug11(args...) fprintf(stderr,args)
#define debug12(args...) fprintf(stderr,args)
#define debug13(args...) fprintf(stderr,args)
#define debug14(args...) fprintf(stderr,args)
#define debug15(args...) fprintf(stderr,args)
#define debug16(args...) fprintf(stderr,args)
#define debug17(args...) fprintf(stderr,args)
#define debug18(args...) fprintf(stderr,args)
#define debug19(args...) fprintf(stderr,args)
#define debug20(args...) fprintf(stderr,args)
#define debug21(args...) fprintf(stderr,args)
#define debug22(args...) fprintf(stderr,args)
#define debug23(args...) fprintf(stderr,args)
#define debug24(args...) fprintf(stderr,args)
#define debug25(args...) fprintf(stderr,args)
#define debug26(args...) fprintf(stderr,args)
#define debug27(args...) fprintf(stderr,args)
#define debug28(args...) fprintf(stderr,args)
#define debug29(args...) fprintf(stderr,args)
#define debug30(args...) fprintf(stderr,args)
#define debug31(args...) fprintf(stderr,args)
#define debug32(args...) fprintf(stderr,args)
#define debug33(args...) fprintf(stderr,args)
#define debug34(args...) fprintf(stderr,args)
#define debug35(args...) fprintf(stderr,args)
#define debug36(args...) fprintf(stderr,args)
#define debug37(args...) fprintf(stderr,args)
#define debug38(args...) fprintf(stderr,args)
#define debug39(args...) fprintf(stderr,args)
#define debug40(args...) fprintf(stderr,args)
#define debug41(args...) fprintf(stderr,args)
#define debug42(args...) fprintf(stderr,args)
#define debug43(args...) fprintf(stderr,args)
#define debug44(args...) fprintf(stderr,args)
#define debug45(args...) fprintf(stderr,args)
#define debug46(args...) fprintf(stderr,args)
#define debug47(args...) fprintf(stderr,args)
#define debug48(args...) fprintf(stderr,args)
#define debug49(args...) fprintf(stderr,args)
#define debug50(args...) fprintf(stderr,args)
#define debug51(args...) fprintf(stderr,args)
#define debug52(args...) fprintf(stderr,args)
#define debug53(args...) fprintf(stderr,args)
#define debug54(args...) fprintf(stderr,args)
#define debug55(args...) fprintf(stderr,args)
#define debug56(args...) fprintf(stderr,args)
#define debug57(args...) fprintf(stderr,args)
#define debug58(args...) fprintf(stderr,args)
#define debug59(args...) fprintf(stderr,args)
#define debug60(args...) fprintf(stderr,args)
#define debug61(args...) fprintf(stderr,args)
#define debug62(args...) fprintf(stderr,args)
#define debug63(args...) fprintf(stderr,args)
#define debug64(args...) fprintf(stderr,args)
#define debug65(args...) fprintf(stderr,args)
#define debug66(args...) fprintf(stderr,args)
#define debug67(args...) fprintf(stderr,args