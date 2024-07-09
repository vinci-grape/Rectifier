import sys

def main():
    n = int(sys.stdin.readline())
    ara = list(map(int, sys.stdin.readline().split()))
    freq = {}
    for num in ara:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    max_freq = max(freq.values())
    for num in ara:
        if freq[num] == max_freq:
            print(num)
            break

if __name__ == "__main__":
    main()