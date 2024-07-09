str = raw_input()
max = 0
cnt = 0
for sc in str:
    if sc == 'A' or sc == 'C' or sc == 'G' or sc == 'T':
        cnt += 1
    else:
        cnt = 0
    max = max < cnt? cnt : max
print max