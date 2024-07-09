import math
import sys

def main ():
    A = int(sys.stdin.readline())
    B = int(sys.stdin.readline())
    H = int(sys.stdin.readline())
    M = int(sys.stdin.readline())
    AA = BigDecimal(A)
    BB = BigDecimal(B)
    HH = BigDecimal(H)
    MM = BigDecimal(M)
    AA2 = AA * AA
    BB2 = BB * BB
    CC = AA2 + BB2
    DD = BigDecimal(math.cos(math.radians(BB2.multiply(AA).subtract(BB).multiply(2).divide(AA2).divide(BB2))))
    DD = DD.multiply(BigDecimal(2))
    DD = DD.multiply(AA)
    DD = DD.multiply(BB)
    ans2 = CC.subtract(DD)
    ans2 = ans2.sqrt()
    ans = ans2.sqrt()
    print(ans)

# Note:
# The above code is the same as the following code.
# However, the above code is more efficient in Python.
# The following code is more efficient in Java.

# Java Code:

import java.util.* ; import java.math.BigDecimal ; public class atcoder_ABC168_C { public static void main ( String [ ] args ) { Scanner sc = new Scanner ( System.in ) ; int A = sc.nextInt ( ) ; int B = sc.nextInt ( ) ; int H = sc.nextInt ( ) ; int M = sc.nextInt ( ) ; BigDecimal AA = new BigDecimal ( A ) ; BigDecimal BB = new BigDecimal ( B ) ; BigDecimal HH = new BigDecimal ( H ) ; BigDecimal MM = new BigDecimal ( M ) ; BigDecimal ans2 ; BigDecimal kaku ; BigDecimal mkaku ; BigDecimal hkaku ; BigDecimal AA2 ; BigDecimal BB2 ; BigDecimal CC ; BigDecimal DD ; double dkaku ; double dans2 ; mkaku = MM.multiply ( BigDecimal.valueOf ( 6 ) ) ; hkaku = HH.multiply ( BigDecimal.valueOf ( 30 ) ) ; hkaku = hkaku.add ( BigDecimal.valueOf ( ( double ) M / 2 ) ) ; kaku = mkaku.subtract ( hkaku ) ; dkaku = Math.abs ( Math.toRadians ( kaku.doubleValue ( ) ) ) ; AA2 = AA.multiply ( AA ) ; BB2 = BB.multiply ( BB ) ; CC = AA2.add ( BB2 ) ; DD = BigDecimal.valueOf ( Math.cos ( dkaku ) ) ; DD = DD.multiply ( BigDecimal.valueOf ( 2 ) ) ; DD = DD.multiply ( AA ) ; DD = DD.multiply ( BB ) ; ans2 = CC.subtract ( DD ) ; dans2 = ans2.doubleValue ( ) ; double ans = Math.sqrt ( dans2 ) ; System.out.println ( ans ) ; } }