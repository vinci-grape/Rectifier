#!/usr/bin/python

import sys

def check(n,wei,book):
  tmp=wei
  n-=1
  for i in range(0,len(book)):
    if tmp<book[i]:
      if n>0:
	n-=1
	tmp=wei
	if tmp<book[i]:
	  return False
      else:
	return False
    tmp-=book[i]
  return True

def main():
  m,n=map(int,raw_input().split())
  book=[]
  for i in range(0,n):
    book.append(int(raw_input()))
  while(m):
    m-=1
    if check(m,int(raw_input()),book):
      print "YES"
    else:
      print "NO"

if __name__=="__main__":
  main()