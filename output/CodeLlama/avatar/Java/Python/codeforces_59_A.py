import sys
word = sys.stdin.readline().strip()
uppercase = 0
lowercase = 0
for ch in word:
    if ch.isupper():
        uppercase += 1
    else:
        lowercase += 1
if uppercase > lowercase:
    print(word.upper())
elif lowercase > uppercase:
    print(word.lower())
else:
    print(word.lower())