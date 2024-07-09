def main():
    s = raw_input()
    targ = list(s)
    map = {}
    for i in range(len(targ)):
        if not map.has_key(targ[i]):
            map[targ[i]] = 1
        else:
            map[targ[i]] += 1
    ok = True
    for c in map.keys():
        if map[c]!= 2:
            ok = False
            break
    if ok and len(map) == 2:
        print "Yes"
    else:
        print "No"

if __name__ == '__main__':
    main()