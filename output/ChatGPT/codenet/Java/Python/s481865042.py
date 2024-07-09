import sys

def main():
    s = input()
    k = int(input())
    result = []
    for i in range(len(s)):
        if (26 - (ord(s[i]) - ord('a'))) <= k and s[i] != 'a':
            k -= 26 - (ord(s[i]) - ord('a'))
            result.append('a')
        else:
            result.append(s[i])
    if k > 0:
        t = result[-1]
        result = result[:-1]
        result.append(chr((ord(t) - ord('a') + k) % 26 + ord('a')))
    print(''.join(result))

if __name__ == "__main__":
    main()