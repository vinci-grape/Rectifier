class calArea:
    def Area(self, w, h):
        area = w * h
        return area

arr = []

for i in range(4):
    arr.append(int(input()))

ab = calArea()
area1 = ab.Area(arr[0], arr[1])
area2 = ab.Area(arr[2], arr[3])

if area1 > area2:
    print(area1)
elif area1 < area2:
    print(area2)
else:
    print(area1)