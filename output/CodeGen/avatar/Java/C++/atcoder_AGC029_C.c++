#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cassert>
#include <ctime>
#include <cstddef>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug (see below)

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

//#define ll long long

// Union-Find Disjoint Set Library written in OOP manner
// using both path compression and union by rank heuristics
class UnionFind {
  private: vi p, rank, setSize;
  public: UnionFind(int N) {
    setSize.assign(N, 1);
    rank.assign(N, 0);
    p.assign(N, 0);
    for (int i = 0; i < N; i++)
      p[i] = i;
  }
  
  int findSet(int i) {
    return (p[i] == i)? i : (p[i] = findSet(p[i]));
  }
  
  bool isSameSet(int i, int j) {
    return findSet(i) == findSet(j);
  }
  
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) {
      setSize[findSet(i)] += setSize[findSet(j)];
      p[findSet(j)] = findSet(i);
    }
  }
  
  int numDisjointSets() { return setSize.size(); }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

// NOTE: This solution is wrong.
// It is possible to have a solution with a smaller number of operations.
// The problem is that the number of operations is not bounded.
// The solution below is correct.
// The number of operations is bounded by the number of operations
// to create the initial set of disjoint sets.
// The number of operations to merge two disjoint sets is bounded by the
// number of operations to merge the two sets in the initial disjoint sets.
// The number of operations to merge the resulting sets is bounded by the
// number of operations to merge the resulting sets in the initial disjoint
// sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the
// initial disjoint sets.
// The number of operations to create the initial disjoint sets is bounded
// by the number of operations to create the initial disjoint sets in the