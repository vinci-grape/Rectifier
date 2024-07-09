import sys

a = int(sys.stdin.readline())

print(a//(60*60), a%(60*60)//60, a%(60*60)%60)