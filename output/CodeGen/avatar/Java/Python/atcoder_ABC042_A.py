def main(args):
    br = BufferedReader(InputStreamReader(System.in))
    line = br.readline()
    list = line.split(' ')
    x = int(list[0])
    a = int(list[1])
    y = int(list[2])
    h = "NO"
    if x == 5 or x == 7 or a == 5 or a == 7 or y == 5 or y == 7:
        if x + y + a == 17:
            h = "YES"
    print(h)