#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import math

def time2min(month,day,hour,min):
  total_day_of_month = [31,28,31,30,31,30,31,31,30,31,30,31]
  total = 0
  for i in range(1,month):
    total += total_day_of_month[i]*24*60
  for i in range(1,day):
    total += 24*60
  total += hour * 60 + min

  return total

def main():
  N = int(sys.stdin.readline())
  if N == 0:
    return

  log = {}
  for i in range(N):
    month,day,hour,min,action,id = sys.stdin.readline().split()
    month = int(month)
    day = int(day)
    hour = int(hour)
    min = int(min)
    id = int(id)
    t = time2min(month,day,hour,min)
    if id not in log:
      log[id] = []
    log[id].append(t)

  total = [0 for i in range(1000)]
  for i in range(0,len(log[0]),2):
    god_start = log[0][i]
    god_end = log[0][i+1]
    for id in log:
      if id == 0:
        continue
      for j in range(0,len(log[id]),2):
        ppl_start = log[id][j]
        ppl_end = log[id][j+1]
        start = max(god_start,ppl_start)
        end = min(god_end,ppl_end)
        total[id] += max(0,end-start)

  max_v = 0
  for id in range(1000):
    max_v = max(total[id],max_v)
  print max_v

if __name__ == '__main__':
  main()