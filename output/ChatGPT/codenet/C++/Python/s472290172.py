import sys

def main():
    str = input()
    
    max_count = 0
    count = 0
    for sc in str:
        if sc == 'A' or sc == 'C' or sc == 'G' or sc == 'T':
            count += 1
        else:
            count = 0
        max_count = max(max_count, count)
    
    print(max_count)

if __name__ == "__main__":
    main()