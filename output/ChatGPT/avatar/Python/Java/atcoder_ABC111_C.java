int n = Integer.parseInt (scanner.nextLine());
String[] input = scanner.nextLine().split(" ");
int[] x = new int[n];
for (int i = 0; i < n; i++) {
    x[i] = Integer.parseInt(input[i]);
}
List<Integer> a = new ArrayList<>();
List<Integer> b = new ArrayList<>();
for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
        a.add(x[i]);
    } else {
        b.add(x[i]);
    }
}
int[] cnta = new int[100002 + 1];
int[] cntb = new int[100002 + 1];
int vala = 0;
int vala1 = 0;
int maxCnta = 0;
int maxCnta1 = 0;
for (int i : a) {
    cnta[i]++;
}
for (int i : a) {
    if (maxCnta < cnta[i]) {
        vala = i;
        maxCnta = cnta[i];
    }
}
for (int i : a) {
    if (maxCnta1 < cnta[i] && vala != i) {
        maxCnta1 = cnta[i];
        vala1 = i;
    }
}
int valb = 0;
int valb1 = 0;
int maxCntb = 0;
int maxCntb1 = 0;
for (int i : b) {
    cntb[i]++;
}
for (int i : b) {
    if (maxCntb < cntb[i]) {
        valb = i;
        maxCntb = cntb[i];
    }
}
for (int i : b) {
    if (maxCntb1 < cntb[i] && valb != i) {
        maxCntb1 = cntb[i];
        valb1 = i;
    }
}
if (valb != vala) {
    int res = 0;
    for (int i : a) {
        if (i != vala) {
            res++;
        }
    }
    for (int i : b) {
        if (i != valb) {
            res++;
        }
    }
    System.out.println(res);
} else {
    int resa = 0;
    int resb = 0;
    int resa1 = 0;
    int resb1 = 0;
    for (int i : a) {
        if (i != vala) {
            resa++;
        }
        if (i != vala1) {
            resa1++;
        }
    }
    for (int i : b) {
        if (i != valb) {
            resb++;
        }
        if (i != valb1) {
            resb1++;
        }
    }
    System.out.println(Math.min(resa + resb1, resa1 + resb));
}