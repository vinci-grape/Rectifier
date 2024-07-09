int combi(int N, int K) {
  int a = 1;
  for (int i = 0; i < K; i++) {
    a *= N - i;
  }
  for (int j = 0; j < K; j++) {
    a /= j + 1;
  }
  return a;
}

int main() {
  Scanner scanner = new Scanner(System.in);
  int N = scanner.nextInt();
  int P = scanner.nextInt();
  
  int ans = 0;
  ArrayList<Integer> lis = new ArrayList<>();
  String[] input = scanner.nextLine().split(" ");
  for (String num : input) {
    lis.add(Integer.parseInt(num));
  }
  
  ArrayList<Integer> ls = new ArrayList<>();
  for (int a : lis) {
    ls.add(a % 2);
  }
  
  int one = Collections.frequency(ls, 1);
  int zero = Collections.frequency(ls, 0);
  
  int pattern_a = 0;
  int pattern_b = 0;
  
  for (int j = 0; j <= zero; j++) {
    pattern_b += combi(zero, j);
  }
  
  int time = 0;
  while (time <= one) {
    if (time % 2 == P) {
      pattern_a += combi(one, time);
    }
    time++;
  }
  
  System.out.println((int) (pattern_a * pattern_b));
}