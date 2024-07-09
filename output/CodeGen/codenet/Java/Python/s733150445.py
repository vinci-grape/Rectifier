import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.util.StringTokenizer;

def main():
    in = BufferedReader(InputStreamReader(System.in))
    st = StringTokenizer(in.readline())
    a = BigDecimal(st.nextToken())
    b = BigDecimal(st.nextToken())
    mul = a * b
    st = StringTokenizer(mul.toString(), ".")
    print(st.nextElement())

main()