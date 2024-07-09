#!/usr/bin/python

import sys

def time2min(month,day,hour,min):
  total = 0
  for i in range(1,month):
    total += 31*24*60
  for i in range(1,day):
    total += 24*60
  total += hour * 60 + min
  return total

def main():
  N = int(sys.argv[1])
  log = {}
  for i in range(N):
    month,day,hour,min,id = map(int,sys.stdin.readline().split('/'))
    t = time2min(month,day,hour,min)
    log[id] = [t]
  for id in log:
    if id == 0: continue
    schedule = log[id]
    for j in range(len(schedule)-1):
      ppl_start = schedule[j]
      ppl_end = schedule[j+1]
      start = max(0,ppl_start)
      end = min(ppl_end,time2min(month,day,hour,min))
      print max(0,end-start)

if __name__ == '__main__':
  main()