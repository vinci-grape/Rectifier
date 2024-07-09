def main():
  n = int(raw_input())
  a = [int(i) for i in raw_input().split()]
  acc = [0] * (n + 1)
  for i in xrange(n):
    acc[i + 1] = acc[i] + a[i]
    acc[i + 1] %= MOD
  ans = 0
  for i in xrange(n):
    ans += a[i] % MOD * (MOD + acc[n] - acc[i + 1]) % MOD
    ans %= MOD
  print ans