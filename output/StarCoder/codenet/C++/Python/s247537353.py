A,B,C,K=map(int,input().split())
print(min(A,K))
if A+B>=K:
  print(min(A,K))
else:
  print(A-(K-(A+B)))