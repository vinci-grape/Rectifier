import sys

class calArea:
    def Area(self, w, h):
        area = w * h
        return area

if __name__ == '__main__':
    arr = []
    for i in range(4):
        arr.append(int(sys.stdin.readline().strip()))

    ab = calArea()
    area1 = ab.Area(arr[0], arr[1])
    area2 = ab.Area(arr[2], arr[3])

    if area1 > area2:
        print(area1)
    elif area1 < area2:
        print(area2)
    else:
        print(area1)