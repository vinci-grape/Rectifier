#!/usr/bin/python

import sys

def main():
  A = int(sys.argv[1])
  B = int(sys.argv[2])
  C = int(sys.argv[3])
  X = int(sys.argv[4])
  
  cnt = 0
  for a in range(0, A+1):
    for b in range(0, B+1):
      for c in range(0, C+1):
        total = 500*a + 100*b + 50*c
        if total == X: cnt += 1
  
  print cnt

if __name__ == '__main__':
  main()