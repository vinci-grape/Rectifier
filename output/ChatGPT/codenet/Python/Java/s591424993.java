int d, g;
Scanner sc = new Scanner(System.in);
d = sc.nextInt();
g = sc.nextInt();
int[][] pc = new int[d][2];
for (int i = 0; i < d; i++) {
    pc[i][0] = sc.nextInt();
    pc[i][1] = sc.nextInt();
}

int ans = Integer.MAX_VALUE;

for (int bit = 0; bit < (1 << d); bit++) {
    int count = 0;
    int sum = 0;
    Set<Integer> nokori = new HashSet<>();

    for (int i = 0; i < d; i++) {
        if ((bit & (1 << i)) != 0) {
            sum += pc[i][0] * (i + 1) * 100 + pc[i][1];
            count += pc[i][0];
            nokori.remove(i + 1);
        } else {
            nokori.add(i + 1);
        }
    }

    if (sum < g) {
        int use = Collections.max(nokori);
        int n = Math.min(pc[use-1][0], (int)Math.ceil((double)(g - sum) / (use * 100)));
        count += n;
        sum += n * use * 100;
    }

    if (sum >= g) {
        ans = Math.min(ans, count);
    }
}
System.out.println(ans);