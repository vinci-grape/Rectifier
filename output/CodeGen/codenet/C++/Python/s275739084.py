def main():
  A,B=map(int,raw_input().split())
  C=A+B
  if A%3!=0 and B%3!=0 and C%3!=0:
    print "Impossible"
  else:
    print "Possible"

if __name__=='__main__':
  main()