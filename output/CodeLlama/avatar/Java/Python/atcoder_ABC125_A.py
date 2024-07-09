import sys

sec = int(sys.stdin.readline())
per_num = int(sys.stdin.readline())
max_sec = float(sys.stdin.readline()) + 0.5
ans_num = 0
for i in range(sec, max_sec, sec):
    ans_num += per_num
print(ans_num)