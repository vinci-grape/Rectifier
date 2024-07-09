def is_solution(columns_count, x):
    all_xs = [True] * columns_count
    for i in range(0, 12):
        if x[i]!= 'X':
            all_xs[i % columns_count] = False
    for i in range(0, columns_count):
        if all_xs[i]:
            return True
    return False

def main():
    t = int(input())
    for i in range(0, t):
        possible_solutions = 0
        solutions = ""
        s = input()
        if is_solution(12, s):
            solutions += " 1x12"
            possible_solutions += 1
        if is_solution(6, s):
            solutions += " 2x6"
            possible_solutions += 1
        if is_solution(4, s):
            solutions += " 3x4"
            possible_solutions += 1
        if is_solution(3, s):
            solutions += " 4x3"
            possible_solutions += 1
        if is_solution(2, s):
            solutions += " 6x2"
            possible_solutions += 1
        if is_solution(1, s):
            solutions += " 12x1"
            possible_solutions += 1
        print(possible_solutions, solutions)

main()