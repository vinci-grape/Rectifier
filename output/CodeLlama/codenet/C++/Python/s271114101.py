a, b, c = input().split()
print("Yes" if (int(a) + int(b) == int(c) or int(b) + int(c) == int(a) or int(a) + int(c) == int(b)) else "No")