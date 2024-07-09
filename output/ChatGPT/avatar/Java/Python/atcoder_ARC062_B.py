import sys

class TaskD:
    def solve(self, S):
        score = 0
        for i in range(len(S)):
            my = 'g' if i % 2 == 0 else 'p'
            his = S[i]
            if my != his:
                score += 1 if my == 'p' else -1
        return score

if __name__ == "__main__":
    S = input()
    solver = TaskD()
    score = solver.solve(S)
    print(score)