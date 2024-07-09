a,b = map(int, raw_input().split())
print(bin(a&b)[2:].zfill(32))
print(bin(a|b)[2:].zfill(32))
print(bin(a^b)[2:].zfill(32))