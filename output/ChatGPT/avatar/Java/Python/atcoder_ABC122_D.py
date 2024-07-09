N = 0
MOD = 1000000007
TOKENS = ['A', 'C', 'G', 'T']
memo = []

def __init__(self):
    self.memo = []
    self.N = int(input())
    for i in range(self.N + 1):
        self.memo.append({})

def calc(self):
    return self.dfs(0, "TTT")

def isOK(self, last4):
    if 'AGC' in last4:
        return False
    for i in range(3):
        vals = list(last4)
        vals[i], vals[i+1] = vals[i+1], vals[i]
        s = ''.join(vals)
        if 'AGC' in s:
            return False
    return True

def dfs(self, current, last3):
    if last3 in self.memo[current]:
        return self.memo[current][last3]
    if current == self.N:
        return 1
    result = 0
    for c in self.TOKENS:
        if self.isOK(last3 + c):
            result = (result + self.dfs(current + 1, last3[1:] + c)) % self.MOD
    self.memo[current][last3] = result
    return result

ins = atcoder_ABC122_D()
print(ins.calc())