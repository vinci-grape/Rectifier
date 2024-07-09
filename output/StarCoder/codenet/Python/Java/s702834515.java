n=int(input())
r=0
for ii in range(n):
  if (ii+1)%3!=0 && (ii+1)%5!=0:
    r+=(ii+1)
print(r)