def main():
    input_str = raw_input()
    odd_count = 0
    for i in range(len(input_str)):
        ch = input_str[i]
        if map.has_key(ch):
            map[ch] += 1
        else:
            map[ch] = 1
    for key, value in map.iteritems():
        if value % 2!= 0:
            odd_count += 1
    if odd_count <= 1 or odd_count % 2!= 0:
        print "First"
    else:
        print "Second"

if __name__ == "__main__":
    main()