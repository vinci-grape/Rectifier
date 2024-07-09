def generate_string():
    sb = ""
    for i in range(1, 1001):
        sb += str(i)
    return sb

n = int(input())
print(generate_string()[n-1])