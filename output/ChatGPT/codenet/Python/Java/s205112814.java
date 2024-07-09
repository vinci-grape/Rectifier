int n, m;
Scanner sc = new Scanner(System.in);
n = sc.nextInt();
m = sc.nextInt();

int[][] gate_cond = new int[m][2];
for (int i = 0; i < m; i++) {
    gate_cond[i][0] = sc.nextInt();
    gate_cond[i][1] = sc.nextInt();
}

int max_under_th = Integer.MIN_VALUE;
int min_upper_th = Integer.MAX_VALUE;
for (int i = 0; i < m; i++) {
    max_under_th = Math.max(max_under_th, gate_cond[i][0]);
    min_upper_th = Math.min(min_upper_th, gate_cond[i][1]);
}

if (min_upper_th - max_under_th >= 0) {
    System.out.println(min_upper_th - max_under_th + 1);
} else {
    System.out.println(0);
}