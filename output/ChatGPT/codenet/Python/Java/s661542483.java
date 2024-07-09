int dfs(int h) {
  if (h == 1) {
    return 1;
  }

  return dfs(h / 2) * 2 + 1;
}

int H = Integer.parseInt(args[0]);
System.out.println(dfs(H));