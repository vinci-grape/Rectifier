# ========================================### FAST IO ###=========================================//
class FastReader:
    def __init__(self):
        self.s = input()
        self.pos = 0

    def next(self):
        self.pos += 1
        return self.s[self.pos - 1]

    def nextInt(self):
        self.pos += 1
        return int(self.s[self.pos - 1])

    def nextLong(self):
        self.pos += 1
        return int(self.s[self.pos - 1])

    def nextDouble(self):
        self.pos += 1
        return float(self.s[self.pos - 1])

    def nextLine(self):
        self.pos += 1
        return self.s[self.pos - 1]
# ====================================================================================================//

# ========================================### MAIN CODE ###=========================================//
if __name__ == "__main__":
    s = FastReader()
    w = open('output.txt', 'w')
    n = s.nextInt()
    m = s.nextInt()

    penal = [0] * (n + 1)
    solved = [False] * (n + 1)

    for i in range(m):
        num = s.nextInt()
        str = s.next()
        if str[0] == 'A':
            solved[num] = True
        else:
            if solved[num] == False:
                penal[num] += 1

    correct_ans = 0
    num_penal = 0
    for i in range(1, n + 1):
        if solved[i] == True:
            correct_ans += 1
            num_penal += penal[i]

    w.write(str(correct_ans) + " " + str(num_penal) + "\n")
    w.close()
# ====================================================================================================//