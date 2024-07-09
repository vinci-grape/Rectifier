def find(a, b):
    calc = 0
    for x in range(len(a)):
        if a[x]!= b[x]:
            calc += 1
    return calc

def main():
    S = input()
    T = input()
    min = maxint
    for i in range(len(S)-len(T)+1):
        min = min(min, find(S[i:i+len(T)], T))
    if min!= maxint:
        print(min)
    else:
        print(len(T))

if __name__ == "__main__":
    main()