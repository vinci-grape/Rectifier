import sys

str = sys.stdin.readline().strip()
dotIndex = 0
for i in range(len(str)):
    if str[i] == '.':
        dotIndex = i
        break
if str[dotIndex - 1] == '9':
    print('GOTO Vasilisa.')
else:
    if int(str[dotIndex + 1]) > 4:
        _str = ''
        for i in range(dotIndex):
            _str += str[i]
        print(int(_str) + 1)
    else:
        for i in range(dotIndex):
            print(str[i], end='')
        print()