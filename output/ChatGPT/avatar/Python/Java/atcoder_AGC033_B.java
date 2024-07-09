int H, W, N;
int s_r, s_c;
String S, T;
boolean Judge = false;
int S_L = 0, S_R = 0, S_U = 0, S_D = 0;
int T_L = 0, T_R = 0, T_U = 0, T_D = 0;
Scanner scanner = new Scanner(System.in);

H = scanner.nextInt();
W = scanner.nextInt();
N = scanner.nextInt();
s_r = scanner.nextInt();
s_c = scanner.nextInt();
S = scanner.next();
T = scanner.next();

for (int x = 0; x < N; x++) {
    if (S.charAt(x) == 'L') {
        S_L += 1;
        if (S_L - T_R - s_c == 0) {
            Judge = true;
        }
    } else if (S.charAt(x) == 'R') {
        S_R += 1;
        if (s_c + (S_R - T_L) == W + 1) {
            Judge = true;
        }
    } else if (S.charAt(x) == 'U') {
        S_U += 1;
        if (S_U - T_D - s_r == 0) {
            Judge = true;
        }
    } else if (S.charAt(x) == 'D') {
        S_D += 1;
        if (s_r + (S_D - T_U) == H + 1) {
            Judge = true;
        }
    }
    if (T.charAt(x) == 'L') {
        if (S_R - T_L + s_c != 1) {
            T_L += 1;
        }
    }
    if (T.charAt(x) == 'R') {
        if (s_c + (T_R - S_L) != W) {
            T_R += 1;
        }
    }
    if (T.charAt(x) == 'U') {
        if (S_D - T_U + s_r != 1) {
            T_U += 1;
        }
    }
    if (T.charAt(x) == 'D') {
        if (s_r + (T_D - S_U) != H) {
            T_D += 1;
        }
    }
}

if (Judge) {
    System.out.println("NO");
} else {
    System.out.println("YES");
}