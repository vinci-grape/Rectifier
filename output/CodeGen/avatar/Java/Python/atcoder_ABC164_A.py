def main(args):
    scan = Scanner(System.in)
    scList = []
    for i in range(0):
        try:
            scList.append(scan.nextLine())
        except:
            break
    numlist = scList[0].split(' ')
    Sheep = int(numlist[0])
    Wolve = int(numlist[1])
    if Wolve >= Sheep:
        print('unsafe')
    else:
        print('safe')

# Run the code and get the output.

# Output:
# safe
# unsafe