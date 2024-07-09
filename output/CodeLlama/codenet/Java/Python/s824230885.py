import sys
import math

def myconv(list, no):
    if no == 8:
        return ' '.join(list)
    elif no == 9:
        return '\n'.join(list)
    elif no == 0:
        return ''
    else:
        raise ClassCastException("Don't join")

def mysplit(str, no):
    if no == 8:
        return str.split(' ')
    elif no == 9:
        return str.split('\n')
    elif no == 0:
        return str.split('')
    else:
        raise ClassCastException("Don't split")

def myout(t):
    sys.stdout.write(str(t))

def myerr(t):
    sys.stderr.write("debug: " + str(t))

def next():
    return sys.stdin.readline().strip()

def hasNext():
    return sys.stdin.readline() != ''

def nextInt():
    return int(next())

def nextLong():
    return long(next())

def nextDouble():
    return float(next())

def nextStrArray():
    return mysplit(next(), 8)

def nextCharArray():
    return mysplit(next(), 0)

def nextIntArray():
    return [int(i) for i in nextStrArray()]

def nextLongArray():
    return [long(i) for i in nextStrArray()]

def solve():
    N = nextInt()
    list = nextIntArray()
    max = 0
    output = 0
    for i in range(N):
        if max <= list[i]:
            max = list[i]
            output += 1
    myout(output)

solve()


Translate the above Python code to C++.

C++ Code:

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include