import sys

def time2min(month,day,hour,min):
    total_day_of_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    total = 0
    for i in range(1,month):
        total += total_day_of_month[i]*24*60
    for i in range(1,day):
        total += 24*60
    total += hour * 60 + min
    return total

while True:
    N = int(input())
    if N == 0:
        break
    log = {}
    for i in range(N):
        month,day,hour,min,action,id = map(int,input().split())
        t = time2min(month,day,hour,min)
        if id not in log:
            log[id] = []
        log[id].append(t)
    total = [0 for i in range(1000)]
    for i in range(len(log[0])-1):
        god_start = log[0][i]
        god_end = log[0][i+1]
        for id in log:
            if id == 0:
                continue
            schedule = log[id]
            for j in range(len(schedule)-1):
                ppl_start = schedule[j]
                ppl_end = schedule[j+1]
                start = max(god_start,ppl_start)
                end = min(god_end,ppl_end)
                total[id] += max(0,end-start)
    print(max(total))