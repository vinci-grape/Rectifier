import java.util.*;
import java.math.*;

def main():
    sa = input()
    sb = input()
    A = BigDecimal(sa)
    B = BigDecimal(sb)
    print(A * B.setScale(0, BigDecimal.ROUND_DOWN))

main()