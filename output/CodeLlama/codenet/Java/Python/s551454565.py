import sys

s = sys.stdin.readline().strip()
if s == "Sunny":
    print("Cloudy")
elif s == "Cloudy":
    print("Rainy")
else:
    print("Sunny")