import sys

def solve(score):
    score.sort()
    total = sum(score[1:-1])
    average = total / (len(score)-2)
    return average

def main():
    while True:
        number = int(input())
        if number == 0:
            break
        
        score = []
        for _ in range(number):
            score.append(int(input()))
        
        average = solve(score)
        print(average)

if __name__ == "__main__":
    main()