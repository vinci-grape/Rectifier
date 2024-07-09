# The given C++ code can be translated to Python as follows:

W, H, x, y, r = map(int, input().split())
if x - r < 0 or x + r > W or y - r < 0 or y + r > H:
    print("No")
elif x - r >= 0 and x + r <= W and y - r >= 0 and y + r <= W:
    print("Yes")