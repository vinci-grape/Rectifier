s = input()
s1 = s[0:1]
s2 = s[1:2]
s3 = s[2:3]
s4 = s[3:4]
a = 0

if s1 == s2:
    a = 1
if s2 == s3:
    a = 1
if s3 == s4:
    a = 1

if a == 1:
    print("Bad")
else:
    print("Good")