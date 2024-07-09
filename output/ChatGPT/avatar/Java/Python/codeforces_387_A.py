import datetime

s = input().split(":")
t = input().split(":")

x = datetime.time(int(s[0]), int(s[1]))
y = datetime.time(int(t[0]), int(t[1]))

print((datetime.datetime.combine(datetime.date.today(), x) - datetime.datetime.combine(datetime.date.today(), y)).total_seconds() // 60)