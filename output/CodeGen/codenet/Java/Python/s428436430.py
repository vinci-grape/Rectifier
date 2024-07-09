class calArea:
    def Area(self, w, h):
        area = w * h
        return area

def main():
    sc = input()
    arr = [int(sc) for sc in input()]
    
    area1 = calArea().Area(arr[0], arr[1])
    area2 = calArea().Area(arr[2], arr[3])
    
    if area1 > area2:
        print(area1)
    elif area1 < area2:
        print(area2)
    elif area1 == area2:
        print(area1)

if __name__ == "__main__":
    main()