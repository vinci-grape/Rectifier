class Cube:
    def __init__(self):
        self.f = [0] * 6

    def roll_z(self):
        self.roll(1, 2, 4, 3)

    def roll_y(self):
        self.roll(0, 2, 5, 3)

    def roll_x(self):
        self.roll(0, 1, 5, 4)

    def roll(self, i, j, k, l):
        self.f[i], self.f[j], self.f[k], self.f[l] = self.f[j], self.f[k], self.f[l], self.f[i]

def eq(c1, c2):
    for i in range(6):
        if c1.f[i] != c2.f[i]:
            return False
    return True

def equal(c1, c2):
    for i in range(6):
        for j in range(4):
            if eq(c1, c2):
                return True
            c1.roll_z()
        if i % 2 == 0:
            c1.roll_y()
        else:
            c1.roll_x()
    return False

c1 = Cube()
c2 = Cube()

c1.f = list(map(int, input().split()))
c2.f = list(map(int, input().split()))

if equal(c1, c2):
    print("Yes")
else:
    print("No")