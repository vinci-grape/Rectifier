import java.util.Scanner;
def main(args):
    sc = Scanner(System.in)
    s = sc.next()
    k = sc.nextLong()
    sb = []
    for i in range(len(s)):
        if (26-(s[i]-'a') <= k and s[i]!= 'a'):
            k -= 26-(s[i]-'a')
            sb.append('a')
        else:
            sb.append(s[i])
    if k > 0:
        sb[-1] = chr((ord(sb[-1]) - ord('a') + k) % 26 + ord('a'))
    print ''.join(sb)