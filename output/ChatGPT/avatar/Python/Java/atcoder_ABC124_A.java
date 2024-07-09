int a = Integer.parseInt(input());
int b = Integer.parseInt(input());
int c = 0;

for (int i = 0; i < 2; i++) {
    c += Math.max(a, b);
    if (a >= b) {
        a -= 1;
    } else {
        b -= 1;
    }
}

System.out.println(c);