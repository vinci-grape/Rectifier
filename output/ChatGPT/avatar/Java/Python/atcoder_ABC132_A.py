def main():
    s = input()
    targ = list(s)

    map = {}
    for i in range(len(targ)):
        if targ[i] not in map:
            map[targ[i]] = 1
        else:
            map[targ[i]] += 1

    ok = True
    for c in map.items():
        if c[1] != 2:
            ok = False
            break

    if ok and len(map) == 2:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()