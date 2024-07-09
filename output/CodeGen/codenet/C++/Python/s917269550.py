def main():
  x, y = map(int, raw_input().split())
  if abs(x-y) <= 1:
    print "Brown"
  else:
    print "Alice"

if __name__ == '__main__':
  main()