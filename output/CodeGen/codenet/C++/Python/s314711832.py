#!/usr/bin/python

import sys

def main():
  V, E, r = map(int, sys.stdin.readline().split())
  edges = []
  for i in range(E):
    edges.append(map(int, sys.stdin.readline().split()))
  distances = [sys.maxint] * V
  prev_distances = [0] * V
  for i in range(V):
    distances[i] = sys.maxint
  distances[r] = 0
  for i in range(V):
    prev_distances[i] = distances[i]
  for i in range(V):
    for j in range(V):
      if distances[i] + edges[j][2] < distances[j]:
        distances[j] = distances[i] + edges[j][2]
  for i in range(V):
    if distances[i] == sys.maxint:
      print "INF"
    else:
      print distances[i]
  for i in range(V):
    if distances[i] == sys.maxint:
      print "INF"
    else:
      print distances[i]

if __name__ == "__main__":
  main()