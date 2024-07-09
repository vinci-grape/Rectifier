import sys

a, b, c = map(int, sys.stdin.readline().split())
if a < b and b < c and a < c:
    print("Yes")
else:
    print("No")

# TODO 自動生成されたメソッド・スタブ