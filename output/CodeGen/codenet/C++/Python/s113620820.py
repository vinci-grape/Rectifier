#!/usr/bin/python

# 2415.cc: Sashimi

import sys

def read_int():
  return int(sys.stdin.readline())

def read_ints():
  return [int(x) for x in sys.stdin.readline().split()]

def read_line():
  return sys.stdin.readline().strip()

def read_lines():
  return [read_line() for x in xrange(read_int())]

def main():
  n = read_int()
  wis = [read_int() for x in xrange(n)]
  wsums = [0] + wis
  for i in xrange(n):
    wsums[i + 1] = wsums[i] + wis[i]
  for i in xrange(n):
    for j in xrange(n):
      dp[i][j + 1] = LINF
      ks[i][j + 1] = -1
    dp[i][i + 1] = 0
    ks[i][i + 1] = i
  for l in xrange(2, n + 1):
    for i in xrange(0, n):
      for j in xrange(l, n + 1):
	mind = LINF
	wsum = wsums[j] - wsums[i]
	mink = -1
	for k in xrange(ks[i][j - 1], ks[i + 1][j] + 1):
	  d = dp[i][k] + dp[k][j] + wsum
	  if mind > d: mind = d, mink = k
	dp[i][j] = mind
	ks[i][j] = mink
  print dp[0][n]

main()