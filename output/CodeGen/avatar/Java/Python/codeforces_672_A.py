def generateString():
    sb = StringBuilder()
    for i in range(1,1000):
        sb.append(i)
    return sb.toString().toCharArray()

def main():
    sc = Scanner(System.in)
    n = sc.nextInt()
    print(generateString()[n-1])