#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <ctime>
#include <cctype>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <memory>
#include <functional>
#include <stdexcept>
#include <new>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <memory>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <future>
#include <numeric>
#include <initializer_list>
#include <random>
#include <chrono>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <locale>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <future>
#include <numeric>
#include <initializer_list>
#include <random>
#include <chrono>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <locale>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <future>
#include <numeric>
#include <initializer_list>
#include <random>
#include <chrono>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvl> vvvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<double, double> pdd;
typedef pair<dd, dd> ddd;
typedef vector<pdd> vpdd;
typedef vector<ddd> vddd;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<double, int> pdi;
typedef pair<int, double> pid;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> plll;
typedef vector<pdi> vpdi;
typedef vector<pil> vpil;
typedef vector<pli> vpli;
typedef vector<plll> vplll;
template<class T> using value = T;
template<class T> using vector = vector<T>;
template<class T> using vs = vector<vs<T>>;
template<class T> using vvs = vector<vs<T>>;
template<class T> using vvvs = vector<vs<vs<T>>>;
template<class T> using vvd = vector<vs<T>>;
template<class T> using vvvd = vector<vs<vs<T>>>;
template<class T> using vvdv = vector<vs<vs<T>>>;
template<class T> using vvvdv = vector<vs<vs<vs<T>>>>;
template<class T> using vvdvd = vector<vs<vs<T>>>;
template<class T> using vvdvvd = vector<vs<vs<vs<T>>>>;
template<class T> using vvdvdvd = vector<vs<vs<vs<vs<T>>>>>;
template<class T> using vvdvdvd = vector<vs<vs<vs<vs<T>>>>>;
template<class T> using vvdvdvd = vector<vs<vs<vs<vs<vs<T>>>>>>;
template<class T> using vvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<T>>>>>>>;
template<class T> using vvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<vs<T>>>>>>>>;
template<class T> using vvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<vs<vs<T>>>>>>>>;
template<class T> using vvdvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<T>>>>>>>>>>>;
template<class T> using vvdvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<T>>>>>>>>>>>;
template<class T> using vvdvdvdvdvdvd = vector<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<vs<