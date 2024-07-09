public class s783753345 {
    public:
        int calculate(string s) {
            int a, b;
            char S;
            while (true) {
                cin >> a >> S >> b;
                if (S == '+') return a + b;
                if (S == '-') return a - b;
                if (S == '*') return a * b;
                if (S == '/') return a / b;
                if (S == '?') break;
            }
            return 0;
        }
};