import sys

def main():
    t = int(input())
    count = [0] * (t + 1)
    for i in range(2, t + 1):
        count[int(input())] += 1
    for i in range(1, t + 1):
        print(count[i])

if __name__ == "__main__":
    main()