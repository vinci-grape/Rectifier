def main():
    n = int(input())
    v_str = input()
    v_list = str_to_list(v_str)
    c_str = input()
    c_list = str_to_list(c_str)
    max_profit = 0
    for i in range(n):
        profit = v_list[i] - c_list[i]
        if profit > 0:
            max_profit += profit
    print(max_profit)

def str_to_list(string):
    arr_str = string.split()
    ret = {}
    key = 0
    for val in arr_str:
        ret[key] = int(val)
        key += 1
    return ret

if __name__ == "__main__":
    main()