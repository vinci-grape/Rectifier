def main(args):
    ob = input()
    n = ob.next()
    array = [ob.next() for i in range(n+1)]
    odd = 0
    even = 0
    odd_ind = 0
    even_ind = 0
    for i in range(1,n+1):
        if array[i] % 2 == 0:
            even += 1
            even_ind = i
        else:
            odd += 1
            odd_ind = i
    if odd > even:
        print(even_ind)
    else:
        print(odd_ind)

if __name__ == '__main__':
    main(sys.argv)