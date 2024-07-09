def main():
  n = int(raw_input())
  sq = [int(i) for i in raw_input().split()]
  com = []
  for i in range(1,n+1):
    com.append(i*i%n)
  for i in range(1,n+1):
    fr = [0]*(n-1)
    for j in range(0,len(com)):
      if com[j] == i:
        for k in range(0,n-1):
          if com[j] == sq[k]:
            fr[k] += 1
    for j in range(0,n-1):
      print fr[j]

if __name__ == '__main__':
  main()