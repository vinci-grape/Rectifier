import sys

def main():
    sec = int(input())
    per_num = int(input())
    max_sec = (int(input()) + 0.5)
    ans_num = 0
    for i in range(sec, max_sec, sec):
        ans_num += per_num
    print(ans_num)

if __name__ == '__main__':
    main()