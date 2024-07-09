def main(sec,per_num,max_sec):
    ans_num = 0
    for i in range(sec,max_sec,sec):
        ans_num += per_num
    print(ans_num)