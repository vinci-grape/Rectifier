import java.util.*;

//update 2019/12/13

def main():
  n = int(next())
  a = int(next())
  b = int(next())
  sa = abs(a-b)
  if sa%2==0:
    ans = sa/2
  else:
    AAA = min((n-a),(a-1))
    BBB = min((n-b),(b-1))
    ans = min(AAA,BBB)
    #差を1減らす⇒差が偶数になる
    sa -= 1
    ans += 1
    #差は偶数
    ans += sa/2
  print(ans)



# Sample Input

5
-2
-1
0
1
2

Sample Output

1
-1
0
1
2

"""