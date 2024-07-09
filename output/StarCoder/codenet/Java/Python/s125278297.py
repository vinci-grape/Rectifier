import sys

h = int(sys.stdin.readline())
w = int(sys.stdin.readline())

for i in range(h):
    print('#' + sys.stdin.readline().strip() + '#')

for i in range(w + 2):
    print('#', end='')
print()

for i in range(h):
    print('#' + sys.stdin.readline().strip() + '#')

for i in range(w + 2):
    print('#', end='')
print()