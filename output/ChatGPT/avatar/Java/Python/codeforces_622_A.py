import sys

def solve():
    position = int(sys.stdin.readline())
    nearest_seq_start_index = 1
    while get_value_at_index(nearest_seq_start_index * 2) < position:
        nearest_seq_start_index *= 2
    while get_value_at_index(nearest_seq_start_index + 1) <= position:
        nearest_seq_start_index += 1
    start_index = get_value_at_index(nearest_seq_start_index)
    sys.stdout.write(str(position - start_index + 1) + "\n")

def get_value_at_index(index):
    return 1 + ((index - 1) * index) // 2

if __name__ == "__main__":
    solve()