int l = 0, r = 0;
Scanner scanner = new Scanner(System.in);
String[] inputs = scanner.nextLine().split(" ");
l = Integer.parseInt(inputs[0]);
r = Integer.parseInt(inputs[1]);

int curr = r;
int s = 0;
while (curr != 0) {
    s++;
    curr /= 10;
}

int first = (int) Math.pow(10, s);
int second = first / 2;
int ans = -1;

for (int i : new int[]{l, r, first, second}) {
    if (i >= l && i <= r) {
        curr = i;
        String rev = "";
        for (char c : String.valueOf(curr).toCharArray()) {
            rev += String.valueOf(9 - Integer.parseInt(String.valueOf(c)));
        }
        ans = Math.max(ans, Integer.parseInt(rev) * curr);
    }
}

System.out.println(ans);