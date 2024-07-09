sec = int(input())
per_num = int(input())
max_sec = float(input()) + 0.5
ans_num = 0

for i in range(sec, int(max_sec), sec):
    ans_num += per_num

print(ans_num)