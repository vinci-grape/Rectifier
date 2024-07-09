int n = Integer.parseInt (scanner.nextLine());
String[] input = scanner.nextLine().split(" ");
int[] lst = new int[n];
for (int i = 0; i < n; i++) {
    lst[i] = Integer.parseInt(input[i]);
}
Arrays.sort(lst);
int od = 0;
for (int i : lst) {
    if (i % 2 != 0) {
        od += 1;
    }
}
int sum = 0;
boolean ok = false;
for (int i = 0; i < n; i++) {
    if (lst[i] % 2 == 0) {
        sum += lst[i];
    } else {
        if (ok || od > 1) {
            sum += lst[i];
            od -= 1;
            ok = !ok;
        }
    }
}
System.out.println(sum);