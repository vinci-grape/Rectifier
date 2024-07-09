import sys

def main():
    str = sys.stdin.readline().strip()
    map = {}
    oddCount = 0
    
    for ch in str:
        if ch in map:
            map[ch] += 1
        else:
            map[ch] = 1
    
    for value in map.values():
        if value % 2 != 0:
            oddCount += 1
    
    if oddCount <= 1 or oddCount % 2 != 0:
        print("First")
    else:
        print("Second")

if __name__ == "__main__":
    main()