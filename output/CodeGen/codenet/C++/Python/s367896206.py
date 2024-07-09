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

def eq(c1, c2):
    for i in range(6):
        if c1.f[i]!= c2.f[i]:
            return False
    return True

c1 = Cube()
c2 = Cube()

for i in range(6):
    c1.f[i] = int(input())
for i in range(6):
    c2.f[i] = int(input())

if equal(c1, c2):
    print("Yes")
else:
    print("No")