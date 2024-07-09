def main():
    try:
        in_ = raw_input
        out = sys.stdout
        n = int(in_())
        a = []
        for i in range(n):
            a.append(int(in_()))
        a = list(set(a))
        a.sort()
        found = False
        for i in range(len(a)):
            if i + 1 < len(a) and i + 2 < len(a):
                if a[i] + 1 == a[i + 1] and a[i + 1] + 1 == a[i + 2]:
                    found = True
                    break
        out.write(found and "YES" or "NO")
    except:
        out.write("NO")